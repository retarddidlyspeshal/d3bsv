#include "Service.h"

#ifndef SERVICE_CHANNELINVITIATIONNOTIFY_H
#define SERVICE_CHANNELINVITIATIONNOTIFY_H

// ServiceHash Definition
#define SERVICEHASH_CHANNELINVITATIONNOTIFY 0xf084fc20


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ChannelInvitationNotify: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ChannelInvitationNotify(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif