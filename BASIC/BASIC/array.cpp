#include <iostream>
using namespace std;

#define MAX 10

int main(void)
{
	int num[MAX];

	// 배열의 이름은 배열의 첫번째 인자의 주소!
	int* p = num;
	
	// 배열 초기화 방법 1
	for (int i = 0; i < MAX; i++)
		num[i] = i;

	// 배열 초기화 방법 2
	for (int i = 0; i < MAX; i++)
		p[i] = i;

	// 배열 초기화 방법 3
	for (int i = 0; i < MAX; i++)
		*(p + i) = i;

	// 배열 탐색 방법 1
	for (int i = 0; i < MAX; i++)
		cout << num[i] << endl;

	// 배열 탐색 방법 2
	for (int i = 0; i < MAX; i++)
		cout << p[i] << endl;

	// 배열 탐색 방법 3
	for (int i = 0; i < MAX; i++)
		cout << *(p + i) << endl;

	return 0;
}