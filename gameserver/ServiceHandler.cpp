#include "ServiceHandler.h"
#include "gamesession.h"

bool c_ServiceHandler::RCPHandler(bool IsRequest, c_gamesession * gamesession, rpcheader * header) {
	Sleep(2000);

	bool found = false;
	unsigned int ServiceHash = 0; 

	if (IsRequest)	{
		//It's a request coming in
	

			for (std::vector<service*>::iterator it = ExportedServices.begin(); it != ExportedServices.end(); it++) {
				//determine the hash to determine the service, match ID
				service * aservice = *it;
				if (aservice->id == header->service) {
					found = true;
					switch (aservice->hash) {

					case SERVICEHASH_AUTHENTICATIONSERVER:

						switch(header->method){

						case mAuthenticationServer_LogonRequest: //shut the compiler up
							return AuthenticationServer->Handle_OnLogonRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"AuthenticationServer->Message");
							break;
						}		

						break;					

					case SERVICEHASH_CHANNEL:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"Channel->Message");
							break;
						}		

						break;					

					case SERVICEHASH_CHANNELINVITIATIONSERVICE:

						switch(header->method){

						case mChannelInvitationService_SubscribeRequest: //shut the compiler up
							return ChannelInvitationService->Handle_OnSubscribeRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ChannelInvitationService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_CHANNELOWNER:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ChannelOwner->Message");
							break;
						}		

						break;					

					case SERVICEHASH_CHATSERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ChatService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_CONNECTIONSERVICE:

						switch(header->method){

						case mConnectionService_ConnectRequest:
							return ConnectionService->Handle_OnConnectRequest(gamesession,header);
							break;

						case mConnectionService_BindRequest:
							return ConnectionService->Handle_OnBindRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ConnectionService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_EXCHANGESERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ExchangeService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_FOLLOWERSSERVICE:

						switch(header->method){

						case mFollowersService_SubscribeToFollowersRequest: //shut the compiler up
							return FollowersService->Handle_OnSubscribeToFollowersRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"FollowersService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_FRIENDSSERVICE:

						switch(header->method){

						case mFriendsService_SubscribeToFriendsRequest: //shut the compiler up
							return FriendsService->Handle_OnSubscribeToFriendsRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"FriendsService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_GAMEMASTER:

						switch(header->method){

						case mGameMaster_ListFactoriesRequest: 
							return GameMaster->Handle_OnListFactoriesRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"GameMaster->Message");
							break;
						}		

						break;					
								
					case SERVICEHASH_GAMEUTILITIES:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"GameUtilities->Message");
							break;
						}		

						break;					

					case SERVICEHASH_NOTIFICATIONSERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"NotificationService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_PARTYSERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"PartyService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_PRESENCESERVICE:

						switch(header->method){

						case mPresenceService_SubscribeRequest: //shut the compiler up
							return PresenceService->Handle_OnSubscribeRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"PresenceServer->Message");
							break;
						}		

						break;					

					case SERVICEHASH_SEARCHSERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up


						default:
							gamesession->PrintDebugMessage(false,header,NULL,"SearchService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_STORAGESERVICE:

						switch(header->method){

						case 0xFF: //shut the compiler up

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"StorageService->Message");
							break;
						}		

						break;					

					case SERVICEHASH_TOONSERVICEEXTERNAL:

						switch(header->method){

						case mToonServiceExternal_ToonListRequest:
							gamesession->PrintDebugMessage(false,header,NULL,"ToonServiceExternal->ToonListRequest");
							return ToonServiceExternal->Handle_OnToonListRequest(gamesession,header);
							break;

						case mToonServiceExternal_SelectToonRequest:
							return ToonServiceExternal->Handle_OnSelectToonRequest(gamesession,header);
							break;

						case mToonServiceExternal_CreateToonRequest:
							return ToonServiceExternal->Handle_OnCreateToonRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"ToonServiceExternal->Message");
							break;
						}		

						break;					

					case SERVICEHASH_USERMANAGERSERVICE:

						switch(header->method){

						case mUserManagerService_SubscribeToUserManagerRequest: 
							return UserManagerService->Handle_SubScribeToUserManagerRequest(gamesession,header);
							break;

						default:
							gamesession->PrintDebugMessage(false,header,NULL,"UserManagerService->Message");
							break;
						}		

						break;					

					default:
						gamesession->PrintDebugMessage(false,header,NULL,"UNKNOWN");
						break;


					}

				}

			}

			if (found == false) {
				gamesession->PrintDebugMessage(false,header,NULL,"SERVICE NOT REGISTERED");
			}

		
	} /*else {
		//It's a response or a request to Client Service.

		switch(header->service) {
			for (std::vector<service*>::iterator it = ExportedServices.begin(); it != ExportedServices.end(); it++) {
				//determine the hash to determine the service, match ID
				service * aservice = *it;
				if (aservice->id == header->service) {
					found = true;
					switch (aservice->hash) {

					case SERVICEHASH_AUTHENTICATIONCLIENT:
						
						break;

					case SERVICEHASH_CHANNELINVITATIONNOTIFY:

						break;		

					case SERVICEHASH_EXCHANGENOTIFY:

						break;		

					case SERVICEHASH_FOLLOWERSNOTIFY:

						break;						

					case SERVICEHASH_FRIENDSNOTIFY:

						break;						

					case SERVICEHASH_NOTIFICATIONLISTENER:

						break;				

					case SERVICEHASH_USERMANAGERNOTIFY:

						break;									

					case SERVICEHASH_GAMEFACTORYSUBSCRIBER:

						break;			

					case SERVICEHASH_CHANNELSUBSCRIBER:

						break;	

					case SERVICEHASH_RESPONSESERVICE:

						break;	

					default:
						gamesession->PrintDebugMessage(true,header,NULL,"UNHANDLED SERVICE");
						break;

					}

				}

			}

			if (found == false) {
				gamesession->PrintDebugMessage(true,header,NULL,"UNHANDLED SERVICE");
			}

		}
		
	}*/
	return false;

}

void c_ServiceHandler::BindNewImport(unsigned int ServiceHash, unsigned int ServiceID) {
	service * aservice = new service;
	aservice->hash = ServiceHash;
	aservice->id = ServiceID;

	this->ImportedServices.push_back(aservice);
	this->Config.Set_AvailibleBindID(Config.AvailibleBindID()+1);
}

void c_ServiceHandler::BindNewExport(unsigned int ServiceHash, unsigned int ServiceID) {
	service * aservice = new service;
	aservice->hash = ServiceHash;
	aservice->id = ServiceID;

	this->ExportedServices.push_back(aservice);
	this->Config.Set_AvailibleBindID(Config.AvailibleBindID()+1);
}


void c_ServiceHandler::ClearImportedServices() {		
	
	if (ExportedServices.size() > 0) {
		service * aservice;
		while(ExportedServices.size() > 0) {
			aservice = ExportedServices.back();
			delete aservice;
			ExportedServices.pop_back();
		}
	}

}

void c_ServiceHandler::ClearExportedServices() {

		if (ImportedServices.size() > 0) {
		service * aservice;
		while(ImportedServices.size() > 0) {
			aservice = ImportedServices.back();
			delete aservice;
			ImportedServices.pop_back();
		}
	}
}

c_ServiceHandler::c_ServiceHandler() {

	this->Config.Set_AvailibleBindID(64);

		ConnectionService = new c_ConnectionService (this);
		ResponseService = new c_ResponseService (this);
		AuthenticationServer = new c_AuthenticationServer (this);
		ChannelInvitationService = new c_ChannelInvitationService (this);
		ToonServiceExternal = new c_ToonServiceExternal (this);
		FollowersService  = new c_FollowersService (this);
		UserManagerService = new c_UserManagerService (this);
		FriendsService = new c_FriendsService (this);
		ExchangeService = new c_ExchangeService (this);
		PresenceService = new c_PresenceService (this);
		GameMaster = new c_GameMaster (this);
		ChannelSubscriber = new c_ChannelSubscriber (this);
		Channel = new c_Channel (this);
		NotificationService = new c_NotificationService (this);
		NotificationListener = new c_NotificationListener (this);
		ChannelInvitationNotify = new c_ChannelInvitationNotify(this);
		FollowersNotify = new c_FollowersNotify (this);
		UserManagerNotify = new c_UserManagerNotify (this);
		FriendsNotify = new c_FriendsNotify (this);
		PartyService = new c_PartyService (this);
		ChatService = new c_ChatService (this);
		GameUtilities = new c_GameUtilities (this);
		ChannelOwner = new c_ChannelOwner (this);
		GameFactorySubscriber = new c_GameFactorySubscriber (this);
		StorageService = new c_StorageService (this);
		ExchangeNotify = new c_ExchangeNotify (this);
		SearchService = new c_SearchService (this);

		this->BindNewExport(SERVICEHASH_RESPONSESERVICE,0xFE);
		this->BindNewExport(SERVICEHASH_CONNECTIONSERVICE,0x00);

}

c_ServiceHandler::~c_ServiceHandler() {

	this->ClearExportedServices();
	this->ClearImportedServices();

	delete ConnectionService;
	delete ResponseService;
	delete AuthenticationServer;
	delete ChannelInvitationService;
	delete ToonServiceExternal ;
	delete FollowersService;
	delete UserManagerService ;
	delete FriendsService;
	delete ExchangeService;
	delete PresenceService;
	delete GameMaster;
	delete ChannelSubscriber;
	delete Channel;
	delete NotificationService;
	delete NotificationListener;
	delete ChannelInvitationNotify;
	delete FollowersNotify;
	delete UserManagerNotify ;
	delete FriendsNotify;
	delete PartyService;
	delete ChatService;
	delete GameUtilities;
	delete ChannelOwner;
	delete GameFactorySubscriber;
	delete StorageService;
	delete ExchangeNotify;
	delete SearchService;

}