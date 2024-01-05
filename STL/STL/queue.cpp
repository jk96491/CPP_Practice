#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    cout << "Queue 크기: " << myQueue.size() << endl;
    cout << "Front 값: " << myQueue.front() << endl;

    myQueue.pop();

    // 큐 크기와 front 원소 재출력
    cout << "pop이후 Queue 크기: " << myQueue.size() << endl;
    cout << "pop이후 Front 값: " << myQueue.front() << endl;

    return 0;
}