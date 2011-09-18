#include "Service.h"
#include "..\bnetinclude.h"

#ifndef SERVICE_EXCHANGESERVICE_H
#define SERVICE_EXCHANGESERVICE_H

// ServiceHash Definition
#define SERVICEHASH_EXCHANGESERVICE 0xd750148b


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ExchangeService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ExchangeService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif