
class c_ServiceHandler;

#ifndef SERVICE_H
#define SERVICE_H

class c_Service {
private:
	c_ServiceHandler * ServiceHandler;
	unsigned int ServiceID;
	unsigned int ServiceHash;

public:
	void Set_ServiceID(unsigned int ServiceID) { this->ServiceID = ServiceID; }
	void Set_ServiceHash(unsigned int ServiceHash) { this->ServiceHash = ServiceHash; }

	c_Service(c_ServiceHandler * ServiceHandler) {
		this->ServiceHandler = ServiceHandler;
	}
};




#endif