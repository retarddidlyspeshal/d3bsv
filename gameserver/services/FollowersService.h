#include "Service.h"
#include "..\bnetinclude.h"

#ifndef SERVICE_FOLLOWERSSERVICE_H
#define SERVICE_FOLLOWERSSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_FOLLOWERSSERVICE 0xe5a11099


// Service Methods Definition
#define mFollowersService_SubscribeToFollowersRequest 0x01
#define mFollowersService_SubscribeToFollowersResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_FollowersService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_FollowersService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_FollowersService::Handle_OnSubscribeToFollowersRequest(c_gamesession * gamesession, rpcheader * header);
};

#endif