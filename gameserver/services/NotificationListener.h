#include "Service.h"

#ifndef SERVICE_NOTIFICATIONLISTENER_H
#define SERVICE_NOTIFICATIONLISTENER_H

// ServiceHash Definition
#define SERVICEHASH_NOTIFICATIONLISTENER 0xe1cb2ea8

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_NotificationListener: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_NotificationListener(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif