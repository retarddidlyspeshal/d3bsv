#include "Service.h"

#ifndef SERVICE_CHANNEL_H
#define SERVICE_CHANNEL_H

// ServiceHash Definition
#define SERVICEHASH_CHANNEL 0xb732db32


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_Channel: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

		c_Channel(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif