#pragma once
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "member_manager.h"

class ManagementProgram
{
private:
	MemberMananger member_manager;

private:
	void display_menu();
	MemberInfo* get_member_info(string id);
	void display_member_info(MemberInfo* memberinfo);
	void load_member_info();

	void execute_add_member();
	void execute_search_member_info();
	void execute_display_all_member();
	void execute_remove_member();

public:
	void execute();
	static void quit()
	{

	}
};