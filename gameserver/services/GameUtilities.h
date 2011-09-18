#include "Service.h"
#ifndef SERVICE_GAMEUTILITIES_H
#define SERVICE_GAMEUTILITIES_H

// ServiceHash Definition
#define SERVICEHASH_GAMEUTILITIES 0x3fc1274d

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_GameUtilities: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_GameUtilities(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif