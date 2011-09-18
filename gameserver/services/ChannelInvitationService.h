#include "..\bnetinclude.h"
#include "Service.h"

#ifndef SERVICE_CHANNELINVITIATIONSERVICE_H
#define SERVICE_CHANNELINVITIATIONSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_CHANNELINVITIATIONSERVICE 0x83040608


// Service Methods Definition
#define mChannelInvitationService_SubscribeRequest 0x01
#define mChannelInvitationService_SubscribeResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_ChannelInvitationService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ChannelInvitationService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_ChannelInvitationService::Handle_OnSubscribeRequest(c_gamesession * gamesession, rpcheader * header);

};

#endif