#include "ChannelInvitationService.h"
#include "..\gamesession.h"

bool c_ChannelInvitationService::Handle_OnSubscribeRequest(c_gamesession * gamesession, rpcheader * header) {		

		bnet::protocol::channel_invitation::SubscribeRequest SubscribeRequest;
		SubscribeRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SubscribeRequest); 
	
		bnet::protocol::channel_invitation::SubscribeResponse SubscribeResponse;

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mChannelInvitationService_SubscribeResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SubscribeResponse);

	}