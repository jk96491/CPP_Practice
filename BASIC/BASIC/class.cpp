#include <iostream>
using namespace std;

class UserInfo
{
private:
	string id;
	string password;
	int age;

public: 
	void set_user_info(string id, string password, int age);
	void set_id(string id);
	void set_password(string password);
	void set_age(int age);

	string get_id();
	string get_password();
	int get_age();
};

void UserInfo::set_user_info(string id, string password, int age)
{
	this->id = id;
	this->password = password;
	this->age = age;
}

void UserInfo::set_id(string id)
{
	this->id = id;
}

void UserInfo::set_password(string password)
{
	this->password = password;
}

void UserInfo::set_age(int age)
{
	this->age = age;
}

string UserInfo::get_id()
{
	return id;
}

string UserInfo::get_password()
{
	return password;
}

int UserInfo::get_age()
{
	return age;
}

void print_user_info(UserInfo* userInfo);

int main(void)
{
	UserInfo userInfo;
	userInfo.set_user_info("raptor", "1234", 27);

	print_user_info(&userInfo);

	return 0;
}

void print_user_info(UserInfo* userInfo)
{
	cout << "ID : " << userInfo->get_id() << endl;
	cout << "password : " << userInfo->get_password() << endl;
	cout << "age : " << userInfo->get_age() << endl;
}