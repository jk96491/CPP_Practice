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

	cout << "�̸� �Է� =>";
	cin >> memberInfo.name;

	cout << "���� �Է� =>";
	cin >> memberInfo.age;

	cout << "Ű �Է� =>";
	cin >> memberInfo.height;

	return memberInfo;
}

void DislplayAllMember()
{
	MemberInfo* pEtor = linkedList.GetEnumerator();

	int count = 0;
	cout << "��ü ȸ�� ���� ���" << endl;
	while (pEtor != nullptr)
	{
		cout << ++count << "��° ȸ�� ����" << endl;
		DisplayMemberInfo(pEtor);
		pEtor = linkedList.MoveNext();
		cout << endl;
	}
	cout << "----------------------" << endl;
}

void DisplayMemberInfo(MemberInfo* pMemberInfo)
{
	cout << "�̸� : " << pMemberInfo->name << endl;
	cout << "���� : " << pMemberInfo->age << endl;
	cout << "Ű : " << pMemberInfo->height << endl;
}