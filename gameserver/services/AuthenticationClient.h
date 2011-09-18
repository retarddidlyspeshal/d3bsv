#include "Service.h"

#ifndef SERVICE_AUTHENTICATIONCLIENT_H
#define SERVICE_AUTHENTICATIONCLIENT_H

// ServiceHash Definition
#define SERVICEHASH_AUTHENTICATIONCLIENT 0x71240e35


// Service Methods Definition


class c_ServiceHandler;
class c_gamesession;

class c_AuthenticationClient: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_AuthenticationClient(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }


};

#endif