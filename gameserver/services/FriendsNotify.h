#include "Service.h"

#ifndef SERVICE_FRIENDSNOTIFY_H
#define SERVICE_FRIENDSNOTIFY_H

// ServiceHash Definition
#define SERVICEHASH_FRIENDSNOTIFY 0x6f259a13


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_FriendsNotify: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_FriendsNotify(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif