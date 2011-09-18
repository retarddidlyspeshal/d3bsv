#ifdef WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <list>
#include "serverconfiguration.h"
#include <boost/thread/thread.hpp>
#include <stdarg.h>
#include "gamesession.h"

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "d3proto.lib")
#pragma comment(lib, "libboost_thread-vc100-mt-sgd-1_47.lib")
#endif

#ifndef GAMESERVER_H
#define GAMESERVER_H


class c_gameserver {

private:

	bool listening;
	SOCKET localsocket;
	std::list<c_gamesession> gamesessions;
	boost::thread * DispatchThread;

public:
	
	c_serverconfiguration * config;

#ifdef WIN32
	bool c_gameserver::InitWinsock();
#endif

	bool c_gameserver::ListenAndDispatch();
	bool c_gameserver::StartListen();
	bool c_gameserver::Terminate();
	
	void c_gameserver::LogMessage(int level, char * format, ...);
	

	c_gameserver() {
		localsocket = NULL;
		DispatchThread = NULL;
		listening = false;
		config = new c_serverconfiguration(this);
	}; 

	~c_gameserver() {
		delete config;
	}


	
};

#endif