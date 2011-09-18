#include "Service.h"
#ifndef SERVICE_STORAGESERVICE_H
#define SERVICE_STORAGESERVICE_H

// ServiceHash Definition
#define SERVICEHASH_STORAGESERVICE 0xda6e4bb9

// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_StorageService: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_StorageService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif