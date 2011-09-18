#include "GameMaster.h"
#include <gameserver\gamesession.h>


bool c_GameMaster::Handle_OnListFactoriesRequest(c_gamesession * gamesession, rpcheader * header) {		

		bnet::protocol::game_master::ListFactoriesRequest ListFactoriesRequest;
		ListFactoriesRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&ListFactoriesRequest); 
	
		bnet::protocol::game_master::ListFactoriesResponse ListFactoriesResponse;

		//NEEDS A PROPER CONFIGURABLE IMPLEMENTATION

		ListFactoriesResponse.mutable_description()->Add();
		ListFactoriesResponse.mutable_description(0)->set_id(14249086168335147635);
		ListFactoriesResponse.mutable_description(0)->add_attribute();
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(0)->set_name("min_players");
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(0)->mutable_value()->set_int_value(2);
		ListFactoriesResponse.mutable_description(0)->add_attribute();
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(1)->set_name("max_players");
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(1)->mutable_value()->set_int_value(4);
		ListFactoriesResponse.mutable_description(0)->add_attribute();
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(2)->set_name("num_teams");
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(2)->mutable_value()->set_int_value(1);
		ListFactoriesResponse.mutable_description(0)->add_attribute();
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(3)->set_name("versions");
		ListFactoriesResponse.mutable_description(0)->mutable_attribute(3)->mutable_value()->set_string_value("0.3.0");
		ListFactoriesResponse.mutable_description(0)->add_stats_bucket();
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_bucket_min(0);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_bucket_max(4.2949673);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_wait_milliseconds(1354);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_games_per_hour(0);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_active_games(0);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_active_players(75);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_waiting_players(0);
		ListFactoriesResponse.mutable_description(0)->mutable_stats_bucket(0)->set_forming_games(0);	

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mGameMaster_ListFactoriesResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&ListFactoriesResponse);

	}
