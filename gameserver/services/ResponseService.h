#include "Service.h"

#ifndef SERVICE_RESPONSESERVICE_H
#define SERVICE_RESPONSESERVICE_H

// ServiceHash Definition
#define SERVICEHASH_RESPONSESERVICE 0xfffffffe

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ResponseService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ResponseService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif