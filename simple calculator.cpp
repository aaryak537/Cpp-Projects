#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char operation;

    cout << "Simple Calculator\n" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> b;

    switch (operation) {
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            cout << "Division: " << a / b << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    system("pause"); 
    return 0;
}
