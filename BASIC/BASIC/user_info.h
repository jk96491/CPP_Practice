#pragma once
#include <iostream>
using namespace std;

class UserInfo
{
private:
	string id;
	string password;
	int* age;

public:
	UserInfo();
	~UserInfo();

public:
	void set_user_info(string id, string password, int age);
	void set_id(string id);
	void set_password(string password);
	void set_age(int age);

	string get_id();
	string get_password();
	int get_age();
};