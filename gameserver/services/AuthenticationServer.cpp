#include "ToonServiceExternal.h"
#include <gameserver\gamesession.h>


bool c_AuthenticationServer::Handle_OnLogonRequest(c_gamesession * gamesession, rpcheader * header) {

		bnet::protocol::authentication::LogonRequest LogonRequest;
		LogonRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&LogonRequest); 
	
		bnet::protocol::authentication::LogonResponse LogonResponse;


		//Come up with something better, I assume it's a identifier.
		srand((uint32_t)time(0));
		Config.Set_Account(rand(),556415616515616564);
		srand((uint32_t)time(0));
		Config.Set_Game_Account(rand(),8697578568568);

		LogonResponse.mutable_account()->set_high(Config.Account().iaccounthigh);
		LogonResponse.mutable_account()->set_low(Config.Account().iaccountlow);
		LogonResponse.mutable_game_account()->set_high(Config.Game_Accout().igamehigh);
		LogonResponse.mutable_game_account()->set_low(Config.Game_Accout().igamelow);

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mAuthenticationServer_LogonResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&LogonResponse);

}