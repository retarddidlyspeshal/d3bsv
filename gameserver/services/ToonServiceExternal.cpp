#include "ToonServiceExternal.h"
#include <gameserver\gamesession.h>

bool c_ToonServiceExternal::Handle_OnToonListRequest(c_gamesession * gamesession, rpcheader * header) {		

		bnet::protocol::toon::external::ToonListRequest ToonListRequest;
		ToonListRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&ToonListRequest); 
	
		bnet::protocol::toon::external::ToonListResponse ToonListResponse;
		

		ToonListResponse.add_toons();
	//	ToonListResponse.add_toons();
		ToonListResponse.mutable_toons(0)->set_high(this->ServiceHandler->PresenceService->Config.high);
		ToonListResponse.mutable_toons(0)->set_low(this->ServiceHandler->PresenceService->Config.low);
//		ToonListResponse.mutable_toons(1)->set_high(216174302532224051);
//		ToonListResponse.mutable_toons(1)->set_low(14655650672318688456);
		//Set what needs to be set		

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mToonServiceExternal_ToonListResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&ToonListResponse);

	}

bool c_ToonServiceExternal::Handle_OnSelectToonRequest(c_gamesession * gamesession, rpcheader * header) {	

		bnet::protocol::toon::external::SelectToonRequest SelectToonRequest;
		SelectToonRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&SelectToonRequest); 
	
		bnet::protocol::toon::external::SelectToonResponse SelectToonResponse;
		
		//Set what needs to be set

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mToonServiceExternal_SelectToonResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&SelectToonResponse);

}

bool c_ToonServiceExternal::Handle_OnCreateToonRequest(c_gamesession * gamesession, rpcheader * header) {		

		bnet::protocol::toon::external::CreateToonRequest CreateToonRequest;
		CreateToonRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&CreateToonRequest); 
	
		bnet::protocol::toon::external::CreateToonResponse CreateToonResponse;
		
		//Set what needs to be set

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mToonServiceExternal_CreateToonResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&CreateToonResponse);

	}