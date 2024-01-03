#include "user_info.h"

void print_user_info(UserInfo* userInfo);

int main(void)
{
	UserInfo* userInfo = nullptr;

	userInfo = new UserInfo();
	userInfo->set_user_info("raptor", "1234", 27);

	print_user_info(userInfo);

	delete userInfo;
	return 0;
}

void print_user_info(UserInfo* userInfo)
{
	cout << "ID : " << userInfo->get_id() << endl;
	cout << "password : " << userInfo->get_password() << endl;
	cout << "age : " << userInfo->get_age() << endl;
}