#ifndef MANAGER_H
#define MANAGER_H
#include "User.h"

class Manager :public User
{
public:
	Manager(std::string userID = "empty", std::string password = "empty");
	~Manager();
private:
	int authorization = MANAGER;
};

Manager::Manager(std::string userID, std::string password)
	:User(userID, password)
{

}

Manager::~Manager()
{
}

#endif