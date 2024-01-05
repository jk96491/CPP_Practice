#include "member_manager.h"

MemberMananger::MemberMananger()
{
}

MemberMananger::~MemberMananger()
{
	member_list.remove_all();
}

MEMBER_ADD_RESULT MemberMananger::add_member(string id, string password, string name, int age)
{
	if (this->check_id_is_duplicated(id))
		return MEMBER_ADD_RESULT::ALREADY_EXIST;

	MemberInfo* new_member = new MemberInfo;
	new_member->set_memeber_info(id, password, name, age);

	this->add_member(new_member);

	return MEMBER_ADD_RESULT::SUCCESS;
}

void MemberMananger::add_member(MemberInfo* new_member)
{
	member_list.add(new_member);
}

bool MemberMananger::check_id_is_duplicated(string id)
{
	my_stl::Data<MemberInfo>* etor = member_list.get_enumerator();

	while (etor != nullptr)
	{
		if (etor->data->get_id() == id)
			return true;
		etor = member_list.move_next();
	}
	
	return false;
}

MemberInfo* MemberMananger::get_member_info(string id)
{
	my_stl::Data<MemberInfo>* etor = member_list.get_enumerator();

	while (etor != nullptr)
	{
		if (etor->data->get_id() == id)
			return etor->data;
		etor = member_list.move_next();
	}

	return nullptr;
}

my_stl::Data<MemberInfo>* MemberMananger::get_enumerator()
{
	return member_list.get_enumerator();
}

my_stl::DATA_REMOVE_RESULT MemberMananger::remove(MemberInfo* remove_member_info)
{
	return member_list.remove(remove_member_info);
}