#include "gameserver.h"



using namespace std;


#ifdef WIN32
bool c_gameserver::InitWinsock() {
	
	WSADATA wsaData = {0};
	LogMessage(1,"%s","Winsock Startup\n");		
	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);

	if(result != 0) {
		if (wsaData.wVersion != 514) { 
			LogMessage(0,"Winsock v2.2 could not be started or is not availible\n");	
		}

		LogMessage(0,"Winsock Error Occured: %d\n",WSAGetLastError());	
		WSACleanup();

		return false;
	} else {
		LogMessage(1,"Winsock v2.2 started.\n");	
		return true; 
	}
}
#endif

bool c_gameserver::StartListen(){

	if (this->DispatchThread != NULL) {
		LogMessage(1,"Dispatch Thread already running, Terminating Thread\n");

#ifdef WIN32
		closesocket(localsocket);
#elif
		close(localsocket);
#endif		
		this->listening = false;
		LogMessage(1,"Waiting on thread join\n");
		this->DispatchThread->timed_join(boost::posix_time::seconds(10));
		LogMessage(1,"Dispatch Thread stopped\n");
	}

	localsocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
/*
#ifdef WIN32
	unsigned long arg(1);
	ioctlsocket(localsocket, FIONBIO, &arg);
#elif
	int arg(fcntl(s, F_GETFL));
	fcntl(localsocket, F_SETFL, arg | O_NONBLOCK);
#endif*/

	if (localsocket == INVALID_SOCKET) 	{ 
		LogMessage(0,"Failed to create socket.\n"); 
		return false;
	} else {
		LogMessage(1,"Successfully created socket.\n"); 
	}

	struct addrinfo hints, *result;
	memset(&hints,0,sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	getaddrinfo(config->localhostname.c_str(),config->localhostport.c_str(),&hints, &result);

	if(::bind(this->localsocket,result->ai_addr,result->ai_addrlen) != 0) {
		LogMessage(0,"Failed to bind socket.\n"); 
		return false;
	} else {
		LogMessage(1,"Socket Bind Successful.\n"); 
	}

	if (listen(this->localsocket,10) != 0) {
		LogMessage(0,"Failed to listen socket.\n");
		return false;
	} else {
		LogMessage(1,"Socket Listen Successful.\n");
	}



	this->DispatchThread = new boost::thread(boost::bind(&c_gameserver::ListenAndDispatch,this));

	return true;
}

bool c_gameserver::Terminate(){
	if (this->DispatchThread != NULL) {
		LogMessage(1,"Listen Thread Termination Requested\n");

#ifdef WIN32
		closesocket(localsocket);
#elif
		close(localsocket);
#endif		
		this->listening = false;
		LogMessage(1,"Waiting on thread join\n");
		this->DispatchThread->timed_join(boost::posix_time::seconds(10));
		LogMessage(1,"DispatchThread stopped\n");
	}
	return true;
}



bool c_gameserver::ListenAndDispatch(){

	this->listening = true;
	int fromlen = 0;
	sockaddr_in from;
	fromlen = sizeof(from);	

	this->LogMessage(0,"Listening for inbound connections on %s:%s\n",this->config->localhostname.c_str(),this->config->localhostport.c_str());	

	this->listening = true;

	while(this->listening == true) {
		
			SOCKET tsock = ::accept(localsocket,(struct sockaddr*)&from,&fromlen);

			if (tsock != INVALID_SOCKET) {
				char str[INET_ADDRSTRLEN];
				inet_ntop(AF_INET,&(from.sin_addr),str,INET_ADDRSTRLEN);
				this->LogMessage(0,"Accepted Connection from %s:%d\n",str,from.sin_port);		
				c_gamesession * tgamesession = new c_gamesession(this);
				tgamesession->StartSession(tsock,from);		
			}

			Sleep(5000);

	}
	return true;
}

void c_gameserver::LogMessage(int level,char * format, ...) {

	if ((level <= this->config->debuglevel) | (level == 0)) {
//		printf("[%d]-",this->config->BattleNet.BaseServices.ServerProcessID.label());
	  va_list args;
	  va_start (args, format);
	  vprintf (format, args);
	  va_end (args);
	}

}

