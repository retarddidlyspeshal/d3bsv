#include "UserManagerService.h"
#include <gameserver\gamesession.h>

bool c_UserManagerService::Handle_SubScribeToUserManagerRequest(c_gamesession * gamesession, rpcheader * header) {

		bnet::protocol::user_manager::SubscribeToUserManagerRequest SubscribeToUserManagerRequest;
		SubscribeToUserManagerRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SubscribeToUserManagerRequest); 
	
		bnet::protocol::user_manager::SubscribeToUserManagerResponse SubscribeToUserManagerResponse;


		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mUserManagerService_SubScribeToUserManagerResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SubscribeToUserManagerResponse);

}