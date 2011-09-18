#include "Service.h"
#include "..\bnetinclude.h"

#ifndef SERVICE_USERMANAGERSERVICE_H
#define SERVICE_USERMANAGERSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_USERMANAGERSERVICE 0x3e19268a

// Service Methods Definition
#define mUserManagerService_SubscribeToUserManagerRequest 0x01
#define mUserManagerService_SubScribeToUserManagerResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_UserManagerService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:
	
	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_UserManagerService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_UserManagerService::Handle_SubScribeToUserManagerRequest(c_gamesession * gamesession, rpcheader * header);

};

#endif