#include "FriendsService.h"
#include <gameserver\gamesession.h>

bool c_FriendsService::Handle_OnSubscribeToFriendsRequest(c_gamesession * gamesession, rpcheader * header) {

		bnet::protocol::friends::SubscribeToFriendsRequest SubscribeToFriendsRequest;
		SubscribeToFriendsRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SubscribeToFriendsRequest); 
	
		bnet::protocol::friends::SubscribeToFriendsResponse SubscribeToFriendsResponse;

		SubscribeToFriendsResponse.set_max_friends(127);
		SubscribeToFriendsResponse.set_max_received_invitations(127);
		SubscribeToFriendsResponse.set_max_sent_invitations(127);

		//Do stuff here

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mFriendsService_SubscribeToFriendsResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SubscribeToFriendsResponse);

}