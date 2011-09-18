#include "Service.h"
#ifndef SERVICE_EXCHANGENOTIFY_H
#define SERVICE_EXCHANGENOTIFY_H

// ServiceHash Definition
#define SERVICEHASH_EXCHANGENOTIFY 0x166fe4a1


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ExchangeNotify: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ExchangeNotify(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif