#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> myVector;

    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    cout << "Vector ũ��: " << myVector.size() << endl;

    cout << "Vector ���ҵ�: ";
    for (int i : myVector)
        cout << i << ", ";

    cout << endl;

    myVector[1] = 50;

    cout << "������ Vector ���ҵ�: ";
    for (int i : myVector)
        cout << i << " ";

    cout << endl;

    myVector.pop_back();

    cout << "Pop���� Vector: ";
    for (int i : myVector)
        cout << i << " ";

    cout << endl;

    return 0;
}