#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    cout << "Queue ũ��: " << myQueue.size() << endl;
    cout << "Front ��: " << myQueue.front() << endl;

    myQueue.pop();

    // ť ũ��� front ���� �����
    cout << "pop���� Queue ũ��: " << myQueue.size() << endl;
    cout << "pop���� Front ��: " << myQueue.front() << endl;

    return 0;
}