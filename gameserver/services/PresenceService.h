#include "Service.h"
#include "..\bnetinclude.h"


#ifndef SERVICE_PRESENCESERVICE_H
#define SERVICE_PRESENCESERVICE_H

// ServiceHash Definition
#define SERVICEHASH_PRESENCESERVICE 0xfa0796ff

// Service Methods Definition
#define mPresenceService_SubscribeRequest 0x01
#define mPresenceService_SubscribeResponse 0x00


class c_ServiceHandler;
class c_gamesession;

class c_PresenceService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_variables{
	public:

		uint64_t high;
		uint64_t low;

	} Config;

	c_PresenceService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_PresenceService::Handle_OnSubscribeRequest(c_gamesession * gamesession, rpcheader * header);

};

#endif