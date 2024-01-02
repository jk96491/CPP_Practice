#include "../MySTL/LinkedList.h"

MyLinkedList::MyLinkedList()
{
	pHead = nullptr;
	pTail = nullptr;
	etor = nullptr;
	size = 0;
}

void MyLinkedList::push_back(MemberInfo newMember)
{
	MemberInfo* memberInfo = new MemberInfo();
	memberInfo->name = newMember.name;
	memberInfo->age = newMember.age;
	memberInfo->height = newMember.height;
	memberInfo->pNext = nullptr;

	if (pHead == nullptr)
		pHead = memberInfo;
	else
		pTail->pNext = memberInfo;

	pTail = memberInfo;

	size++;
}

MemberInfo* MyLinkedList::GetEnumerator()
{
	etor = pHead;
	return etor;
}

MemberInfo* MyLinkedList::MoveNext()
{
	return etor->pNext;
}

int MyLinkedList::Size()
{
	return this->size;
}