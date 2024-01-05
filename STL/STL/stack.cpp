#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    cout << "Stack 크기: " << myStack.size() << endl;
    cout << "Top 값: " << myStack.top() << endl;

    myStack.pop();

    cout << "pop 이후 Stack 크기: " << myStack.size() << endl;
    cout << "pop 이후 Top 값: " << myStack.top() << endl;

    return 0;
}