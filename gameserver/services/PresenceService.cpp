#include "GameMaster.h"
#include <gameserver\gamesession.h>

bool c_PresenceService::Handle_OnSubscribeRequest(c_gamesession * gamesession, rpcheader * header) {
	
		bnet::protocol::presence::SubscribeRequest SubscribeRequest;
		SubscribeRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SubscribeRequest); 

		this->Config.high = SubscribeRequest.mutable_entity_id()->high();
		this->Config.low = SubscribeRequest.mutable_entity_id()->low();
		bnet::protocol::NoData SubscribeResponse;


		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mPresenceService_SubscribeResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SubscribeResponse);
		
		return true;

}

