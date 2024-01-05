#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> myVector;

    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    cout << "Vector 크기: " << myVector.size() << endl;

    cout << "Vector 원소들: ";
    for (int i : myVector)
        cout << i << ", ";

    cout << endl;

    myVector[1] = 50;

    cout << "수정된 Vector 원소들: ";
    for (int i : myVector)
        cout << i << " ";

    cout << endl;

    myVector.pop_back();

    cout << "Pop이후 Vector: ";
    for (int i : myVector)
        cout << i << " ";

    cout << endl;

    return 0;
}