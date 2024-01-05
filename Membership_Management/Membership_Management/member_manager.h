#pragma once
#include "member_info.h"

enum class MEMBER_ADD_RESULT
{
	SUCCESS = 0,
	ALREADY_EXIST,
	FAIL
};

class MemberMananger
{
private:
	my_stl::LinkedList<MemberInfo> member_list;

public:
	MemberMananger();
	~MemberMananger();

	MEMBER_ADD_RESULT add_member(string id, string password, string name, int age);
	void add_member(MemberInfo* new_member);
	bool check_id_is_duplicated(string id);
	MemberInfo* get_member_info(string id);
	my_stl::Data<MemberInfo>* get_enumerator();
	my_stl::DATA_REMOVE_RESULT remove(MemberInfo* remove_member_info);

};