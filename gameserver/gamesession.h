#include "ServiceHandler.h"
#include "bnetinclude.h"
#include <boost/thread/thread.hpp>
#include <WinSock2.h>

#ifndef GAMESESSION_H
#define GAMESESSION_H

class c_gameserver;

class c_gamesession {
private:

	c_gameserver * server;
	bool active;
	sockaddr_in remoteaddr;
	SOCKET sessionsocket;
	boost::thread * HandlePacketsThread;

#define RXBUFFERSIZE 4096
#define RXBUFFERCHUNK 2048
#define TXBUFFERSIZE 4096

	unsigned char buf_in[RXBUFFERSIZE];
	unsigned char buf_out[TXBUFFERSIZE];

	c_ServiceHandler ServiceHandler;


public:


	bool c_gamesession::StartSession(SOCKET &sock, sockaddr_in &addr);
	bool c_gamesession::ProcessPackets();
	void c_gamesession::PrintDebugMessage(bool IsTXPacket, rpcheader * header, google::protobuf::Message * tMessage, char * UnHandledType = NULL);
	bool c_gamesession::HandleMessage(rpcheader * header);

	bool c_gamesession::SendpMessage(rpcheader * header, google::protobuf::Message * tMessage);


	c_gamesession(c_gameserver * pgameserver) {
		server = pgameserver;
		HandlePacketsThread = NULL;
	}
	~c_gamesession() {

	}
};

#endif