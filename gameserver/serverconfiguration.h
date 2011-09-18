#include <string>


#ifndef SERVERCONFIGURATION_H
#define SERVERCONFIGURATION_H

class c_gameserver;

class c_serverconfiguration {
private:
	c_gameserver * gameserver;
public:

		std::string localhostname;
		std::string localhostport;
		std::string configurationfile;
		std::string proclabel;
		std::string logpath;

		int debuglevel;
		bool logfile;
		bool logstdout;

		class c_config {
		public:

		} BattleNet;



		bool c_serverconfiguration::checkconfigsanity();

		c_serverconfiguration(c_gameserver *pgameserver) {
			gameserver = pgameserver;
			debuglevel = 0;
		};
};

#endif