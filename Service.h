#include <stdint.h>



#ifndef SERVICE_H
#define SERVICE_H



class c_Service {
private:

	uint8_t iServiceID;
	uint8_t iServiceHash;

public:
	void ServiceID(unsigned int ServiceID) { this->iServiceID = ServiceID; }
	void ServiceHash(unsigned int ServiceHash) { this->iServiceHash = ServiceHash; }
	uint32_t Get_ServiceID()  { return this->iServiceID; }
	uint32_t Get_ServiceHash() { return this->iServiceHash; }

};




#endif