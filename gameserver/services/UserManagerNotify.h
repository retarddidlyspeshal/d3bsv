#include "Service.h"


#ifndef SERVICE_USERMANAGERNOTIFY_H
#define SERVICE_USERMANAGERNOTIFY_H

// ServiceHash Definition
#define SERVICEHASH_USERMANAGERNOTIFY 0xbc872c22

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_UserManagerNotify: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_UserManagerNotify(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif