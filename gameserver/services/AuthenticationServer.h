#include "..\bnetinclude.h"
#include "Service.h"

#ifndef SERVICE_AUTHENTICATIONSERVER_H
#define SERVICE_AUTHENTICATIONSERVER_H

// ServiceHash Definition
#define SERVICEHASH_AUTHENTICATIONSERVER 0x0decfc01

// Service Methods Definition
#define mAuthenticationServer_LogonRequest 0x01
#define mAuthenticationServer_LogonResponse 0x00

class c_ServiceHandler;
class c_gamesession;

class c_AuthenticationServer: public c_Service  {
private:
	c_ServiceHandler * ServiceHandler;

public:

	class c_Config{
	private:
		struct s_account {
			uint64_t iaccounthigh;
			uint64_t iaccountlow;
		} account;

		struct s_game {
			uint64_t igamehigh;
			uint64_t igamelow;
		} game_account;


	public:
		void Set_Game_Account(uint64_t low,uint64_t high) { this->game_account.igamelow = low; this->game_account.igamehigh = high; }
		void Set_Account(uint64_t low,uint64_t high) { this->account.iaccountlow = low; this->account.iaccounthigh = high; }
		s_account Account() { return this->account; }
		s_game Game_Accout() { return this->game_account; }

	c_Config() {
	}
	} Config;

	c_AuthenticationServer(c_ServiceHandler * ServiceHandler) { this->ServiceHandler = ServiceHandler; }
	bool c_AuthenticationServer::Handle_OnLogonRequest(c_gamesession * gamesession, rpcheader * header);
};

#endif