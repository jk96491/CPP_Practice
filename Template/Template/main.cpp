#include <iostream>
using namespace std;

// ÅÛÇÃ¸´ ÇÔ¼ö
template <typename T>
T add(T a, T b) 
{
    return a + b;
}

// ÅÛÇÃ¸´ Å¬·¡½º
template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    void set_first(T first)
    {
        this->first = first;
    }

    void set_second(T second)
    {
        this->second = second;
    }

    void display_info()
    {
        cout << "Pair:" << first << ", " << second  << endl;
    }
};

int main() 
{
    int sum_int = add<int>(3, 5);
    double sum_double = add<double>(2.5, 4.7);

    cout << "int µ¡»ù: " << sum_int << endl;
    cout << "double µ¡»ù: " << sum_double << endl;

    Pair<int> intPair;
    Pair<string> stringPair;

    intPair.set_first(10);
    intPair.set_second(20);
    intPair.display_info();

    stringPair.set_first("Hello");
    stringPair.set_second("World");
    stringPair.display_info();

    return 0;
}