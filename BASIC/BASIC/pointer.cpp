#include <iostream>
using namespace std;

void swap1(int a, int b);
void swap2(int* a, int* b);
void print(int a, int b);

int main(void)
{
	int a = 10;
	int b = 20;

	int* p1 = &a;
	int* p2 = &b;

	cout << "p1�� �ּ� : " << p1 << ", p1�� �� : " << *p1 << endl;
	cout << "p2�� �ּ� : " << p2 << ", p2�� �� : " << *p2 << endl;
	cout << endl;

	swap1(a, b);
	cout << "swap1 ���" << endl;
	print(a, b);

	cout << endl;

	swap2(&a, &b);
	cout << "swap2 ���" << endl;
	print(a, b);

	return 0;
}

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int a, int b)
{
	cout << "a : " << a << ", b : " << b << endl;
}