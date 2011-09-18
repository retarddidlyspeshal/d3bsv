#include "Service.h"
#ifndef SERVICE_CHANNELOWNER_H
#define SERVICE_CHANNELOWNER_H

// ServiceHash Definition
#define SERVICEHASH_CHANNELOWNER 0x060ca08d


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ChannelOwner: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ChannelOwner(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif