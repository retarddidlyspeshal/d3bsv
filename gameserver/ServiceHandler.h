#include "rpcproc.h"
#include "services\ConnectionService.h"
#include "services\ResponseService.h"
#include "services\AuthenticationServer.h"
#include "services\ChannelInvitationService.h"
#include "services\ToonServiceExternal.h"
#include "services\FollowersService.h"
#include "services\UserManagerService.h"
#include "services\FriendsService.h"
#include "services\ExchangeService.h"
#include "services\PresenceService.h"
#include "services\GameMaster.h"
#include "services\ChannelSubscriber.h"
#include "services\Channel.h"
#include "services\AuthenticationClient.h"
#include "services\NotificationService.h"
#include "services\NotificationListener.h"
#include "services\ChannelInvitationNotify.h"
#include "services\FollowersNotify.h"
#include "services\UserManagerNotify.h"
#include "services\FriendsNotify.h"
#include "services\PartyService.h"
#include "services\ChatService.h"
#include "services\GameUtilities.h"
#include "services\ChannelOwner.h"
#include "services\GameFactorySubscriber.h"
#include "services\StorageService.h"
#include "services\ExchangeNotify.h"
#include "services\SearchService.h"
#include "..\d3proto_cpp\lib\rpc\connection.pb.h"
#include <google\protobuf\message.h>
#include <list>
#include "..\Service.h"

#ifndef SERVICE_SERVICEHANDLER_H
#define SERVICE_SERVICEHANDLER_H

class c_gamesession;

class c_ServiceHandler {
private:

	struct service {
		unsigned int hash;
		unsigned int id;
	};
	public:
	c_AuthenticationClient * AuthenticationClient;
	c_ConnectionService * ConnectionService;
	c_ResponseService * ResponseService;
	c_AuthenticationServer * AuthenticationServer;
	c_ChannelInvitationService * ChannelInvitationService;
	c_ToonServiceExternal * ToonServiceExternal;
	c_FollowersService * FollowersService ;
	c_UserManagerService * UserManagerService;
	c_FriendsService * FriendsService;
	c_ExchangeService * ExchangeService;
	c_PresenceService * PresenceService;
	c_GameMaster * GameMaster;
	c_ChannelSubscriber * ChannelSubscriber;
	c_Channel * Channel;	
	c_NotificationService * NotificationService;
	c_NotificationListener * NotificationListener;
	c_ChannelInvitationNotify * ChannelInvitationNotify;
	c_FollowersNotify * FollowersNotify;
	c_UserManagerNotify * UserManagerNotify;
	c_FriendsNotify * FriendsNotify;
	c_PartyService * PartyService;
	c_ChatService * ChatService;
	c_GameUtilities * GameUtilities;
	c_ChannelOwner * ChannelOwner;
	c_GameFactorySubscriber * GameFactorySubscriber;
	c_StorageService * StorageService;
	c_ExchangeNotify * ExchangeNotify;
	c_SearchService * SearchService;

	std::vector<service*> ImportedServices;
	std::vector<service*> ExportedServices;



	class c_Config{
	private:
		uint8_t iAvailibleBindID;

	public:

		void Set_AvailibleBindID(unsigned int BindID) { this->iAvailibleBindID =  BindID; };
		uint32_t AvailibleBindID() { return this->iAvailibleBindID; }
		
	c_Config() {
		iAvailibleBindID = 0;
	}
	} Config;
	
	void c_ServiceHandler::ClearImportedServices();
	void c_ServiceHandler::ClearExportedServices();
	bool c_ServiceHandler::RCPHandler(bool IsRequest, c_gamesession * gamesession, rpcheader * header);
	void c_ServiceHandler::BindNewImport(unsigned int ServiceHash, unsigned int ServiceID);
	void c_ServiceHandler::BindNewExport(unsigned int ServiceHash, unsigned int ServiceID);

	c_ServiceHandler();

	~c_ServiceHandler();
	
};

#endif