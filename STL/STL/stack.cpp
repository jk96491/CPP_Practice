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

    cout << "Stack ũ��: " << myStack.size() << endl;
    cout << "Top ��: " << myStack.top() << endl;

    myStack.pop();

    cout << "pop ���� Stack ũ��: " << myStack.size() << endl;
    cout << "pop ���� Top ��: " << myStack.top() << endl;

    return 0;
}