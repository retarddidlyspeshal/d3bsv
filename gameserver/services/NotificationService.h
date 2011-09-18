#include "Service.h"

#ifndef SERVICE_NOTIFICATIONSERVICE_H
#define SERVICE_NOTIFICATIONSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_NOTIFICATIONSERVICE 0x0cbe3c43

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_NotificationService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_NotificationService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif