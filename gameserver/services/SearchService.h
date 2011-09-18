#include "Service.h"

#ifndef SERVICE_SEARCHSERVICE_H
#define SERVICE_SEARCHSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_SEARCHSERVICE 0x0a24a291

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_SearchService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_SearchService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif