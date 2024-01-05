#include "management_program.h"

void ManagementProgram::display_menu()
{
	cout << "--------- 회원관리 프로그램 ---------" << endl;
	cout << "1, 회원 추가" << endl;
	cout << "2, 회원 조회" << endl;
	cout << "3, 회원 전체 조회" << endl;
	cout << "4, 회원 삭제" << endl;
	cout << "5, 종료" << endl;
	cout << "==>";
}

void ManagementProgram::execute_add_member()
{
	string id;
	string password;
	string name;
	int age;

	cout << "--------- 회원 추가 --------" << endl;
	cout << "ID 입력 =>";
	cin >> id;

	if (true == member_manager.check_id_is_duplicated(id))
	{
		cout << id << "는 이미 가입된 id 입니다." << endl;
		return;
	}

	cout << "비밀번호 입력 =>";
	cin >> password;

	cout << "이름 입력 =>";
	cin >> name;

	cout << "나이 입력 =>";
	cin >> age;

	member_manager.add_member(id, password, name, age);
}

MemberInfo* ManagementProgram::get_member_info(string id)
{
	MemberInfo* memberinfo = member_manager.get_member_info(id);

	return memberinfo;
	if (nullptr == memberinfo)
		cout << id << "는 없는 회원 입니다.." << endl;
	else
	{
		cout << "------- id : " << memberinfo->get_id() << " -------" << endl;
		cout << "비밀번호 : " << memberinfo->get_password() << endl;
		cout << "이름 : " << memberinfo->get_name() << endl;
		cout << "나이 : " << memberinfo->get_age() << endl;
	}
}

void ManagementProgram::display_member_info(MemberInfo* memberinfo)
{
	cout << "------- id : " << memberinfo->get_id() << " -------" << endl;
	cout << "비밀번호 : " << memberinfo->get_password() << endl;
	cout << "이름 : " << memberinfo->get_name() << endl;
	cout << "나이 : " << memberinfo->get_age() << endl;
}

void ManagementProgram::execute_search_member_info()
{
	string id;
	cout << "조회할 id 입력 =>";
	cin >> id;

	MemberInfo* member_info = get_member_info(id);
	if (member_info == nullptr)
		cout << id << "는 없는 회원 입니다.." << endl;
	else
		display_member_info(member_info);
}

void ManagementProgram::execute_display_all_member()
{
	my_stl::Data<MemberInfo>* etor = member_manager.get_enumerator();

	while (etor != nullptr)
	{
		display_member_info(etor->data);
		etor = etor->pNext;
	}
}

void ManagementProgram::execute_remove_member()
{
	string id;
	cout << "삭제할 id 입력 =>";
	cin >> id;

	MemberInfo* member_info = get_member_info(id);
	if (member_info == nullptr)
		cout << id << "는 없는 회원 입니다.." << endl;

	my_stl::DATA_REMOVE_RESULT result = member_manager.remove(member_info);

	if (result == my_stl::DATA_REMOVE_RESULT::SUCCESS)
		cout << id << "의 회원정보가 삭제되었습니다." << endl;
	else
		cout << "회원 삭제 오류 : " << result << endl;

}

void ManagementProgram::execute()
{
	int user_input = 0;

	member_manager.add_member("aaaa", "1234", "raptor1", 33);
	member_manager.add_member("bbbb", "2345", "raptor2", 31);
	member_manager.add_member("cccc", "3456", "raptor3", 27);
	member_manager.add_member("dddd", "4567", "raptor4", 21);
	member_manager.add_member("eeee", "5678", "raptor5", 39);

	while (true)
	{
		display_menu();
		cin >> user_input;

		switch (user_input)
		{
		case 1: execute_add_member(); break;
		case 2: execute_search_member_info(); break;
		case 3: execute_display_all_member(); break;
		case 4: execute_remove_member(); break;
		case 5: break;
		}
	}

	cout << "프로그램을 종료합니다." << endl;
}