#include "Service.h"
#include "..\bnetinclude.h"

#ifndef SERVICE_GAMEMASTER_H
#define SERVICE_GAMEMASTER_H

// ServiceHash Definition
#define SERVICEHASH_GAMEMASTER 0x810cb195

// Service Methods Definition
#define mGameMaster_ListFactoriesRequest 0x02
#define mGameMaster_ListFactoriesResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_GameMaster: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	private:



	public:



	c_Config() {
	}
	} Config;

	c_GameMaster(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_GameMaster::Handle_OnListFactoriesRequest(c_gamesession * gamesession, rpcheader * header);

};

#endif