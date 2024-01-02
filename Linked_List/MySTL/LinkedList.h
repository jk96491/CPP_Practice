#pragma once
#include <iostream>
using namespace std;

struct MemberInfo {
	string name;
	int age;
	float height;

	MemberInfo* pNext;
};

class MyLinkedList {
private:
	MemberInfo* pHead;
	MemberInfo* pTail;
	MemberInfo* etor;

	int size;
public:
	MyLinkedList();

public:
	void push_back(MemberInfo newMember);
	MemberInfo* GetEnumerator();
	MemberInfo* MoveNext();
	int Size();
};