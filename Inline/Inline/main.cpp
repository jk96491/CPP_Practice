#include <iostream>
using namespace std;

inline int sum(int x, int y)
{
	return x + y;
}

int main(void)
{
	int x = 10;
	int y = 20;

	int result = sum(x, y);

	cout << result << endl;
}