#include <iostream>
using namespace std;

#define MAX 10

int main(void)
{
	int num[MAX];
	int* p = num;
	
	// �迭 �ʱ�ȭ ��� 1
	for (int i = 0; i < MAX; i++)
		num[i] = i;

	// �迭 �ʱ�ȭ ��� 2
	for (int i = 0; i < MAX; i++)
		p[i] = i;

	// �迭 �ʱ�ȭ ��� 3
	for (int i = 0; i < MAX; i++)
		*(p + i) = i;

	// �迭 Ž�� ��� 1
	for (int i = 0; i < MAX; i++)
		cout << num[i] << endl;

	// �迭 Ž�� ��� 2
	for (int i = 0; i < MAX; i++)
		cout << p[i] << endl;

	// �迭 Ž�� ��� 3
	for (int i = 0; i < MAX; i++)
		cout << *(p + i) << endl;

	return 0;
}