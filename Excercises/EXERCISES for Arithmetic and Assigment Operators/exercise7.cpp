#include <iostream>

using namespace std;

/*
   Write a program that asks the user to input two numbers and calculates their remainder (modulo).
   Print the result in the console.
*/

main() {
    int num1, num2, remainder;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    remainder = num1 % num2;
    cout << "The remainder of " << num1 << " divided by " << num2 << " = " << remainder << endl;
}


