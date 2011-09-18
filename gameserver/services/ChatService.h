#include "Service.h"

#ifndef SERVICE_CHATSERVICE_H
#define SERVICE_CHATSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_CHATSERVICE 0x00d89ca9


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ChatService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ChatService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif