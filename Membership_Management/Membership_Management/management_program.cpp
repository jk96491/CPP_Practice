#include "management_program.h"

void ManagementProgram::display_menu()
{
	cout << "--------- ȸ������ ���α׷� ---------" << endl;
	cout << "1, ȸ�� �߰�" << endl;
	cout << "2, ȸ�� ��ȸ" << endl;
	cout << "3, ȸ�� ��ü ��ȸ" << endl;
	cout << "4, ȸ�� ����" << endl;
	cout << "5, ����" << endl;
	cout << "==>";
}

void ManagementProgram::execute_add_member()
{
	string id;
	string password;
	string name;
	int age;

	cout << "--------- ȸ�� �߰� --------" << endl;
	cout << "ID �Է� =>";
	cin >> id;

	if (true == member_manager.check_id_is_duplicated(id))
	{
		cout << id << "�� �̹� ���Ե� id �Դϴ�." << endl;
		return;
	}

	cout << "��й�ȣ �Է� =>";
	cin >> password;

	cout << "�̸� �Է� =>";
	cin >> name;

	cout << "���� �Է� =>";
	cin >> age;

	member_manager.add_member(id, password, name, age);
}

MemberInfo* ManagementProgram::get_member_info(string id)
{
	MemberInfo* memberinfo = member_manager.get_member_info(id);

	return memberinfo;
	if (nullptr == memberinfo)
		cout << id << "�� ���� ȸ�� �Դϴ�.." << endl;
	else
	{
		cout << "------- id : " << memberinfo->get_id() << " -------" << endl;
		cout << "��й�ȣ : " << memberinfo->get_password() << endl;
		cout << "�̸� : " << memberinfo->get_name() << endl;
		cout << "���� : " << memberinfo->get_age() << endl;
	}
}

void ManagementProgram::display_member_info(MemberInfo* memberinfo)
{
	cout << "------- id : " << memberinfo->get_id() << " -------" << endl;
	cout << "��й�ȣ : " << memberinfo->get_password() << endl;
	cout << "�̸� : " << memberinfo->get_name() << endl;
	cout << "���� : " << memberinfo->get_age() << endl;
}

void ManagementProgram::execute_search_member_info()
{
	string id;
	cout << "��ȸ�� id �Է� =>";
	cin >> id;

	MemberInfo* member_info = get_member_info(id);
	if (member_info == nullptr)
		cout << id << "�� ���� ȸ�� �Դϴ�.." << endl;
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
	cout << "������ id �Է� =>";
	cin >> id;

	MemberInfo* member_info = get_member_info(id);
	if (member_info == nullptr)
		cout << id << "�� ���� ȸ�� �Դϴ�.." << endl;

	my_stl::DATA_REMOVE_RESULT result = member_manager.remove(member_info);

	if (result == my_stl::DATA_REMOVE_RESULT::SUCCESS)
		cout << id << "�� ȸ�������� �����Ǿ����ϴ�." << endl;
	else
		cout << "ȸ�� ���� ���� : " << result << endl;

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

	cout << "���α׷��� �����մϴ�." << endl;
}