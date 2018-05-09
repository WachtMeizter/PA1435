#ifndef USER_H
#define USER_H
#define MANAGER 1;
#define TRUCKDRIVER 2;
#include <string>
class User
{
public:
	User(std::string userID = "empty", std::string password = "empty");
	~User();
	std::string getLogin();

	bool operator==(const User & orgUser)const;

private:
	std::string userID;
	std::string password;
};

User::User(std::string userID = "?", std::string password = "?")
{
	this->userID = userID;
	this->password = password;
}

User::~User()
{
}

inline std::string User::getLogin()
{
	return userID + password;
}

inline bool User::operator==(const User & orgUser)const
{
	return userID + password == orgUser.userID + orgUser.password;
}
#endif // !USER_H
