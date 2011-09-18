#include "utilities.h"
#include "gamesession.h"
#include "gameserver.h"

using namespace std;

bool c_gamesession::StartSession(SOCKET &sock, sockaddr_in &addr) {

	if (this->HandlePacketsThread != NULL) {
		server->LogMessage(1,"HandlePacketsThread already running, Terminating Thread\n");

#ifdef WIN32
		closesocket(this->sessionsocket);
#elif
		close(this->sessionsocket);
#endif		
		this->active = false;
		server->LogMessage(1,"Waiting on thread join\n");
		this->HandlePacketsThread->timed_join(boost::posix_time::seconds(10));
		server->LogMessage(1,"HandlePacketsThread stopped\n");
	}

	if (sock != INVALID_SOCKET) {
		this->sessionsocket = sock;
		this->remoteaddr = addr;

		this->HandlePacketsThread = new boost::thread(boost::bind(&c_gamesession::ProcessPackets,this));

		return true;
	} else {
		server->LogMessage(0,"Invalid Socket specified on SessionStart\n");
	}
		
	return false;
}

bool c_gamesession::ProcessPackets() {
	this->server->LogMessage(0,"HandlePacketsThread started for GameSession Instance\n");
	
	this->active = true;

	rpcheader header;
	unsigned int rxbufferpos = 0;
	
	unsigned int ret = 0;
	unsigned char * messagestart = NULL;
	unsigned int messagelength = 0;
	unsigned int headerlength = 0;
	unsigned int totallength = 0;


	while (this->active == true) {

		if (rxbufferpos + RXBUFFERCHUNK >= RXBUFFERSIZE) {
			this->server->LogMessage(0,"Inbound Message has exceeded RXBUFFERSIZE (%d), dropping buffer!",RXBUFFERSIZE);
			rxbufferpos = 0;
			continue;
		}

		ret = recv(this->sessionsocket,(char *)buf_in+rxbufferpos,RXBUFFERCHUNK,0);

		if ((ret == 0) || (ret == SOCKET_ERROR)) {
			char str[INET_ADDRSTRLEN];
			inet_ntop(AF_INET,&(this->remoteaddr.sin_addr),str,INET_ADDRSTRLEN);
			this->server->LogMessage(0,"Non Graceful Disconnect from %s:%d\n",str,this->remoteaddr.sin_port);	
			break; 
		} else { rxbufferpos += ret; }

		messagestart = procheader(buf_in,rxbufferpos,&header);
		while ((messagestart != NULL) && (rxbufferpos >= header.sizing.totallength)) {

			//If Packet is of Service oreniated.
			ServiceHandler.RCPHandler(true,this,&header);

			memcpy(buf_in,header.sizing.nextmessagepos,RXBUFFERSIZE-header.sizing.totallength);
			messagestart = NULL;
			rxbufferpos -= header.sizing.totallength;			
			messagestart = procheader(buf_in,rxbufferpos,&header);
		}

		continue;

	}


	return true;
}


void c_gamesession::PrintDebugMessage(bool IsTXPacket, rpcheader * header, google::protobuf::Message * tMessage, char * UnHandledType) {

	int debuglevel = this->server->config->debuglevel;
	std::string hexstring;

	if ((debuglevel >=4) || (tMessage == NULL)) {
		ArrayToString(header->sizing.headerstart,header->sizing.totallength,&hexstring);
	}

	if  (tMessage == NULL) {		
		if (UnHandledType != NULL) {
			this->server->LogMessage(debuglevel,"[%s] Event: UNHANDLED, Type: %s, Bytes %d\n[!!] Byte Dump (Inc Header) ->\n%s\n\n",(IsTXPacket)?"Out":"In",UnHandledType,header->sizing.totallength,hexstring.c_str());
		} else {
			this->server->LogMessage(debuglevel,"[%s] Event: UNHANDLED, Bytes %d\n[!!] Byte Dump (Inc Header) ->\n%s\n\n",(IsTXPacket)?"Out":"In",header->sizing.totallength,hexstring.c_str());
		}	

	} else {	

		if (UnHandledType != NULL) {
			this->server->LogMessage(debuglevel,"[%s] Event: UNHANDLED, Type: %s, Bytes %d\n[!!] Message Debug ->\n%s[!!] Byte Dump (Inc Header) ->\n%s\n\n",(IsTXPacket)?"Out":"In",UnHandledType,header->sizing.totallength,tMessage->DebugString().c_str(),hexstring.c_str());
		}

		if (debuglevel == 1) {
				this->server->LogMessage(debuglevel,"[%s] Type: %s, Size: %d\n",(IsTXPacket)?"In":"Out",tMessage->GetTypeName().c_str(),header->sizing.totallength);
		}



		if (debuglevel == 2) {
			this->server->LogMessage(debuglevel,"[%s] Type: %s, Size: %d\n[!!] Message Debug ->\n%s\n",(IsTXPacket)?"Out":"In",
				tMessage->GetTypeName().c_str(),header->sizing.totallength,tMessage->DebugString().c_str());
		}
	
		if (debuglevel >= 3) {
			this->server->LogMessage(debuglevel,"[%s] Type: %s, Size: %d\n[!!] Message Debug ->\n%s[!!] Byte Dump (Inc. Header) ->\n%s\n\n",(IsTXPacket)?"Out":"In",
				tMessage->GetTypeName().c_str(),header->sizing.totallength,tMessage->DebugString().c_str(),hexstring.c_str());
		
		}
	}
	
}

bool c_gamesession::SendpMessage(rpcheader * header, google::protobuf::Message * tMessage) {

	unsigned char* pos = buf_out;
	*pos = header->service; pos++;
	pos = add_varint(pos, header->method);
	*(unsigned short*)pos =header->reqid; pos+=2; 
	if (header->service != 0xFE) { 	pos = add_varint(pos, header->unknow4); }
	header->datasize = tMessage->ByteSize();
	pos = add_varint(pos, header->datasize);

	header->sizing.headerstart = buf_out;
	header->sizing.headerlength = (unsigned int) (pos-buf_out);
	header->sizing.messagepos = pos;
	header->sizing.messagelength = header->datasize;
	header->sizing.totallength = header->sizing.headerlength + header->sizing.messagelength;
	
	tMessage->SerializeToArray(pos,header->sizing.messagelength);
	int sent = send(this->sessionsocket,(char *) buf_out,header->sizing.totallength,0);

	if(server->config->debuglevel > 0) { this->PrintDebugMessage(true,header,tMessage); }

	return true;
}
