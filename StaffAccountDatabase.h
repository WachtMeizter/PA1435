#ifndef STAFFACCOUNTDATABASE_H
#define STAFFACCOUNTDATABASE_H
#include <vector>

#include "User.h"
#include "Manager.h"
#include "TruckDriver.h"
//#include "List.h"

class StaffAccountDatabase
{
public:
	StaffAccountDatabase();

	~StaffAccountDatabase();
	bool checkLogin(const User & userDetails);
	int getAuthorization()const;

private:
	std::vector<User> Users;

};

StaffAccountDatabase::StaffAccountDatabase()
{
	Users.insert(User("test", "test"));
}

StaffAccountDatabase::~StaffAccountDatabase()
{

}

bool StaffAccountDatabase::checkLogin(const User & userDetails)
{
	return Users.find(userDetails);
}

inline int StaffAccountDatabase::getAuthorization() const
{
	int authorization = -1;
	Manager* temp = nullptr;
	temp = dynamic_cast<Manager*>(Users.getCurrent());
	if (temp == nullptr)
	{
		authorization = TRUCKDRIVER;
	}
	else
	{
		authorization = MANAGER;
	}
	return authorization;
}

#endif // !STAFFACCOUNTDATABASE_H