//calculator
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Prompt user to enter operator
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    // Prompt user to enter two operands
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Operator is not correct";
            break;
    }

    return 0;
}
