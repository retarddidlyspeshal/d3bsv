#include "..\bnetinclude.h"
#include "Service.h"

#ifndef SERVICE_CONNECTIONSERVICE_H
#define SERVICE_CONNECTIONSERVICE_H

// ServiceHash Definition
#define SERVICEHASH_CONNECTIONSERVICE 0x00000000

// Service Methods Definition
#define mConnectionService_ConnectResponse 0x00
#define mConnectionService_ConnectRequest 0x01
#define mConnectionService_BindRequest 0x02
#define mConnectionService_BindResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_ConnectionService: public c_Service {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	private:
		bnet::protocol::ProcessId ClientProcessID;
		bnet::protocol::ProcessId ServerProcessID;

	public:
		bnet::protocol::ProcessId & GetClientProcessID() { return this->ClientProcessID; }
		bnet::protocol::ProcessId & GetServerProcessID() { return this->ServerProcessID; }
		void SetClientProcessID(bnet::protocol::ProcessId &ClientProcessID) { this->ClientProcessID.CopyFrom(ClientProcessID); }
		void SetServerProcessID(bnet::protocol::ProcessId &ServerProcessID) { this->ServerProcessID.CopyFrom(ServerProcessID); }

	} Config;

	c_ConnectionService(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }

	bool c_ConnectionService::Handle_OnConnectRequest(c_gamesession * gamesession, rpcheader * header);
	bool c_ConnectionService::Handle_OnBindRequest(c_gamesession * gamesession, rpcheader * header);

};

#endif