#include <iostream>
using namespace std;

void swap1(int x, int y);
void swap2(int* x, int* y);
void print(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	int* p1 = &a;	// p1�� a�� �ּҸ� ����Ŵ
	int* p2 = &b;	// p2�� b�� �ּҸ� ����Ŵ

	cout << "p1�� �ּ� : " << p1 << ", p1�� �� : " << *p1 << endl;
	cout << "p2�� �ּ� : " << p2 << ", p2�� �� : " << *p2 << endl;
	cout << endl;

	swap1(a, b);
	cout << "swap1 ���" << endl;
	print(a, b);

	cout << endl;

	int a = 10;
	int b = 20;

	swap2(&a, &b);


	cout << "swap2 ���" << endl;
	print(a, b);

	return 0;
}

// call by value
void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// call by reference
void swap2(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void print(int a, int b)
{
	cout << "a : " << a << ", b : " << b << endl;
}