#include "calculator.h"

void PrintMessage(string message, int result);

int main() {
    Calculator calculator;
    calculator.set_message_printer(&PrintMessage);

    calculator.add(2, 4);
    calculator.subtract(12, 4);

    return 0;
}

void PrintMessage(string message, int result)
{
    cout << message << " = " << result << endl;
}