#include <iostream>

using namespace std;

/*
   Write a program that asks the user to input two numbers and calculates their product (multiplication).
   Print the result in the console.
*/

main() {
    float num1, num2, product;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    product = num1 * num2;
    cout << num1 << " times " << num2 << " = " << product << endl;
}
