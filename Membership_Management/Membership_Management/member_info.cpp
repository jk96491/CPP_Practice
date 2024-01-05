#include "member_info.h"

MemberInfo::MemberInfo()
{
	id = "";
	password = "";
	name = "";
	age = 0;

	friend_list = new LinkedList<string>();
}

MemberInfo::~MemberInfo()
{
	delete friend_list;
}

void MemberInfo::set_memeber_info(string id, string password, string name, int age)
{
	this->id = id;
	this->password = password;
	this->name = name;
	this->age = age;
}

void MemberInfo::set_id(string id)
{
	this->id = id;
}

void MemberInfo::set_password(string password)
{
	this->password = password;
}

void MemberInfo::set_name(string name)
{
	this->name = name;
}

void MemberInfo::set_age(int age)
{
	this->age = age;
}

string MemberInfo::get_id()
{
	return id;
}

string MemberInfo::get_password()
{
	return password;
}

string MemberInfo::get_name()
{
	return name;
}

int MemberInfo::get_age()
{
	return age;
}

void MemberInfo::add_friend(string* friend_name)
{
	if(friend_list != nullptr)
		friend_list->add(friend_name);
}

void MemberInfo::remove_friend(string* friend_name)
{
	if (friend_list != nullptr)
	{
		my_stl:DATA_REMOVE_RESULT result = friend_list->remove(friend_name);
	}
}

void MemberInfo::remove_all_friend()
{
	if (friend_list != nullptr)
		friend_list->remove_all();
}