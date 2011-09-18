#include "Service.h"

#ifndef SERVICE_PARTYSERVICE_H
#define SERVICE_PARTYSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_PARTYSERVICE 0xf4e7fa35

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_PartyService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_PartyService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif