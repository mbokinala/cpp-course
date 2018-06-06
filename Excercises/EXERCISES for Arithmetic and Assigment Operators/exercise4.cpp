#include <iostream>

using namespace std;

/*
   Write a program that asks the user to input two numbers and calculates their difference (subtraction).
   Print the result in the console.
*/

main() {
    float num1, num2, difference;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    difference = num1 - num2;
    cout << num1 << " - " << num2 << " = " << difference << endl;
}
