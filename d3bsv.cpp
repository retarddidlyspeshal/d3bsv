
#include "d3bsv.h"
#include "gameserver\gameserver.h"


#define VERSIONMAJOR 1
#define VERSIONMINOR 0

using namespace std;
std::list<c_gameserver> runningservers;

int main(int argc, char* argv[])
{
	printf("Diablo III Battle.net Emulator - Version: %d.%d\n\n",VERSIONMAJOR,VERSIONMINOR);
	
	if (argv > 0) {
		for (int args=0; args < argc; args++) {
			if (strcmp(argv[args],"-debug") == 0) {
				//debug level
			} else if (strcmp(argv[args],"-server") == 0) {
				//-server 10.1.1.1 6000 0 c:\config.ini
				//-wlog c:\logfile.txt
				//-debug 1
				if (args + 3 <= argc) {
					c_gameserver * gameserver = new c_gameserver;
					gameserver->LogMessage(0,"Created new instance of GameServer\n");
					gameserver->config->localhostname = argv[args+1];
					gameserver->config->localhostport = argv[args+2];
					gameserver->config->proclabel = argv[args+3];
					gameserver->config->configurationfile = argv[args+3];
					gameserver->config->debuglevel = 5;
					
					if (!gameserver->config->checkconfigsanity()) {
						gameserver->LogMessage(0,"Configuration Sanity Check Failed, Path specified: %s\n",gameserver->config->configurationfile);					
						exit(1);
					}

#ifdef WIN32
					if (!gameserver->InitWinsock()) {
						gameserver->LogMessage(0,"Winsock failed to Initialise, Terminating.\n");
						exit(1);
					}
#endif
					if (!gameserver->StartListen()) {
						gameserver->LogMessage(0,"Failed to Open Socket for listen, Terminating.\n");
						exit(1);
					}

					runningservers.push_back(*gameserver);
				} else { ShowCommands(); }
			}		
		}
	}
	
	Sleep(500000);
	return 0;
}

void ShowCommands() {
	cout << "show commands" << endl;
}

void TerminateApp() {
#ifdef WIN32
	WSACleanup();
#endif
	exit(1);
}

