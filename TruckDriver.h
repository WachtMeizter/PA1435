#ifndef TRUCKDRIVER_H
#define TRUCKDRIVER_H
#include "User.h"

class TruckDriver : public User
{
public:
	TruckDriver(std::string userID = "empty", std::string password = "empty");
	~TruckDriver();
private:
	int authorization = TRUCKDRIVER;
};

TruckDriver::TruckDriver(std::string userID, std::string password)
	:User(userID, password)
{
}

TruckDriver::~TruckDriver()
{
}


#endif // !TRUCKDRIVER_H