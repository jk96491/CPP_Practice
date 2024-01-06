#include <iostream>
using namespace std;

#define MAX 10

void init(int nums[])
{
	for (int i = 0; i < MAX; i++)
		nums[i] = i + 1;
}

int main(void)
{
	int nums[MAX];

	init(nums);

	for (int i = 0; i < MAX; i++)
		cout << nums[i] << endl;

	return 0;
}