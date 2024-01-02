#include "../MySTL/LinkedList.h"

MemberInfo InputMemberInfo();
void DislplayAllMember();
void DisplayMemberInfo(MemberInfo* pMemberInfo);

MyLinkedList linkedList;

int main()
{
	while (true)
	{
		MemberInfo memberInfo = InputMemberInfo();
		linkedList.push_back(memberInfo);

		DislplayAllMember();
	}
}

MemberInfo InputMemberInfo()
{
	MemberInfo memberInfo;

	cout << "이름 입력 =>";
	cin >> memberInfo.name;

	cout << "나이 입력 =>";
	cin >> memberInfo.age;

	cout << "키 입력 =>";
	cin >> memberInfo.height;

	return memberInfo;
}

void DislplayAllMember()
{
	MemberInfo* pEtor = linkedList.GetEnumerator();

	int count = 0;
	cout << "전체 회원 정보 출력" << endl;
	while (pEtor != nullptr)
	{
		cout << ++count << "번째 회원 정보" << endl;
		DisplayMemberInfo(pEtor);
		pEtor = linkedList.MoveNext();
		cout << endl;
	}
	cout << "----------------------" << endl;
}

void DisplayMemberInfo(MemberInfo* pMemberInfo)
{
	cout << "이름 : " << pMemberInfo->name << endl;
	cout << "나이 : " << pMemberInfo->age << endl;
	cout << "키 : " << pMemberInfo->height << endl;
}