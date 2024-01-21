#pragma once
#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
    void (*messagePrinter)(string, int);

public:
    void set_message_printer(void (*messagePrinter)(string, int))
    {
        this->messagePrinter = messagePrinter;
    }

    int add(int a, int b)
    {
        int result = a + b;
        string msg = "µ¡¼À °á°ú " + to_string(a) + " + " + to_string(b);

        messagePrinter(msg, result);
        return result;
    }

    int subtract(int a, int b)
    {
        int result = a - b;
        string msg = "»¬¼À °á°ú " + to_string(a) + " + " + to_string(b);

        messagePrinter(msg, result);
        return result;
    }
};