#include "Service.h"

#ifndef SERVICE_CHANNELSUBSCRIBER_H
#define SERVICE_CHANNELSUBSCRIBER_H

// ServiceHash Definition
#define SERVICEHASH_CHANNELSUBSCRIBER 0xbf8c8094


// Service Methods Definition



class c_ServiceHandler;
class c_gamesession;

class c_ChannelSubscriber: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ChannelSubscriber(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
};

#endif