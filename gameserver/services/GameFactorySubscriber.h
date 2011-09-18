#include "Service.h"
#ifndef SERVICE_GAMEFACTORYSUBSCRIBER_H
#define SERVICE_GAMEFACTORYSUBSCRIBER_H

// ServiceHash Definition
#define SERVICEHASH_GAMEFACTORYSUBSCRIBER 0xc6f9ccc5

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_GameFactorySubscriber: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_GameFactorySubscriber(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif