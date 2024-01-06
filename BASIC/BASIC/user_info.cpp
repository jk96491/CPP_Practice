#include "user_info.h"

UserInfo::UserInfo()
{
	cout << "생성자 호출" << endl;

	id = "";
	password = "";
	age = new int;
}

UserInfo::~UserInfo()
{
	cout << "소멸자 호출" << endl;

	id = "";
	password = "";

	delete age;
}

void UserInfo::set_user_info(string id, string password, int age)
{
	this->id = id;
	this->password = password;
	*this->age = age;
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
	*this->age = age;
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
	return *age;
}