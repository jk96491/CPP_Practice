#pragma once
#include "linked_list.h"
using namespace my_stl;

class MemberInfo {
private:
	string id;
	string password;
	string name;
	int age;

	LinkedList<string>* friend_list;
public:
	MemberInfo();
	~MemberInfo();

	void set_memeber_info(string id, string password, string name, int age);
	void set_id(string id);
	void set_password(string password);
	void set_name(string name);
	void set_age(int age);
	void add_friend(string* friend_name);
	void remove_friend(string* friend_name);
	void remove_all_friend();

public:
	string get_id();
	string get_password();
	string get_name();
	int get_age();
};