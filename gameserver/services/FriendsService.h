#include "Service.h"
#include "..\bnetinclude.h"

#ifndef SERVICE_FRIENDSSERVICE_H
#define SERVICE_FRIENDSSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_FRIENDSSERVICE 0xa3ddb1bd


// Service Methods Definition
#define mFriendsService_SubscribeToFriendsRequest 0x01
#define mFriendsService_SubscribeToFriendsResponse 0x00


class c_ServiceHandler;
class c_gamesession;

class c_FriendsService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_FriendsService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_FriendsService::Handle_OnSubscribeToFriendsRequest(c_gamesession * gamesession, rpcheader * header);
};

#endif