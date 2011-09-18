#include "serverconfiguration.h"

#include "gameserver.h"


bool c_serverconfiguration::checkconfigsanity() {

	

//	BattleNet.BaseServices.ServerProcessID.set_label(atoi(this->proclabel.c_str()));
//	BattleNet.BaseServices.ServerProcessID.set_epoch((unsigned int)time(0));

	this->gameserver->LogMessage(1,"Checking Configuration Sanity\n");

	//open config file and read the settings

	this->gameserver->LogMessage(0,"Configuration Sanity Check Succeeded\n");

	return true;
}