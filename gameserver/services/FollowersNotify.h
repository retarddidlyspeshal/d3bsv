#include "Service.h"

#ifndef SERVICE_FOLLOWERSNOTIFY_H
#define SERVICE_FOLLOWERSNOTIFY_H

// ServiceHash Definition
#define SERVICEHASH_FOLLOWERSNOTIFY 0x905cdf9f


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_FollowersNotify: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_FollowersNotify(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif