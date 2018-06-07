#include <iostream>
#include <cstdlib>

using namespace std;

main() {

    beginning:

    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

     system("cls");

    switch (operation) {
        case '+': {
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        } case '-': {
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        }
        case '*': {
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        } case '/': {
            if(num2 == 0) {
                cout << "Cannot divide by 0!" << endl;
                break;
            }
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            break;
        } default: {
            cout << "Invalid operation." << endl;
            break;
        }
    }

    char cont;
    cout << "Do you want to continue? (Y/N): ";
    cin >> cont;

    if (cont == 'y' || cont == 'Y') {
        system("cls");
        goto beginning;
    }
}
