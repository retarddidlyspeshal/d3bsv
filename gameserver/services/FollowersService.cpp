#include "FollowersService.h"
#include <gameserver\gameserver.h>

bool c_FollowersService::Handle_OnSubscribeToFollowersRequest(c_gamesession * gamesession, rpcheader * header) {

	bnet::protocol::followers::SubscribeToFollowersRequest SubscribeToFollowersRequest;
		SubscribeToFollowersRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SubscribeToFollowersRequest); 
	
		bnet::protocol::followers::SubscribeToFollowersResponse SubscribeToFollowersResponse;

		//Set what needs to be set		

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mFollowersService_SubscribeToFollowersResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SubscribeToFollowersResponse);

	}