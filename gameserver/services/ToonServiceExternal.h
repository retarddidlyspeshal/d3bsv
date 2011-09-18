#include "..\bnetinclude.h"
#include "Service.h"

#ifndef SERVICE_TOONSERVICEEXTERNAL_H
#define SERVICE_TOONSERVICEEXTERNAL_H

// ServiceHash Definition
#define SERVICEHASH_TOONSERVICEEXTERNAL 0x4124c31b

// Service Methods Definition
#define mToonServiceExternal_ToonListRequest 0x01
#define mToonServiceExternal_ToonListResponse 0x00
#define mToonServiceExternal_SelectToonRequest 0x02
#define mToonServiceExternal_SelectToonResponse 0x00
#define mToonServiceExternal_CreateToonRequest 0x03
#define mToonServiceExternal_CreateToonResponse 0x00

class c_ServiceHandler;
class c_gamesession;;

class c_ToonServiceExternal: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	public:


	c_Config() {
	}
	} Config;

	c_ToonServiceExternal(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_ToonServiceExternal::Handle_OnToonListRequest(c_gamesession * gamesession, rpcheader * header);
	bool c_ToonServiceExternal::Handle_OnCreateToonRequest(c_gamesession * gamesession, rpcheader * header);
	bool c_ToonServiceExternal::Handle_OnSelectToonRequest(c_gamesession * gamesession, rpcheader * header);
};

#endif