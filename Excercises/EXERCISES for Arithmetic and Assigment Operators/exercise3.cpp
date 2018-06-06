#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input two numbers and calculates their sum (addition).
    Print the result on in the console.
*/

main() {
    float num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;
}
