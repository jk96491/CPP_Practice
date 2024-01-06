#include <iostream>
using namespace std;

struct UserInfo
{
	string id;
	string password;
	int age;
};

void print_user_info1(UserInfo userInfo);
void print_user_info2(UserInfo* userInfo);

int main(void)
{
	UserInfo userInfo;

	userInfo.id = "raptor";
	userInfo.password = "1234";
	userInfo.age = 27;

	cout << "print_user_info1 ���" << endl;
	print_user_info1(userInfo);

	cout << endl;

	cout << "print_user_info2 ���" << endl;
	print_user_info2(&userInfo);

	return 0;
}

// ������ �����Ҷ��� .
void print_user_info1(UserInfo userInfo)
{
	cout << "ID : " << userInfo.id << endl;
	cout << "Password : " << userInfo.password << endl;
	cout << "age : " << userInfo.age << endl;
}

// �ּҷ� �����Ҷ��� ->
void print_user_info2(UserInfo* userInfo)
{
	cout << "ID : " << userInfo->id << endl;
	cout << "Password : " << userInfo->password << endl;
	cout << "age : " << userInfo->age << endl;
}