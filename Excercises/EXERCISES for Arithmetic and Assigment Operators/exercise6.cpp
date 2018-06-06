#include <iostream>

using namespace std;

/*
   Write a program that asks the user to input two numbers and calculates their quotient (division).
   Print the result in the console.
*/

main() {
    float num1, num2, quotient;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    quotient = num1 / num2;
    cout << num1 << " divided by " << num2 << " = " << quotient << endl;
}

