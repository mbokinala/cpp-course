#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input any number (integer or floating point) and
    the n-th power (integer) the number should be raised to. Then calculate the result of the
    exponentiation of this number to the said power.
*/

main() {
    int num, power, result;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the exponent: ";
    cin >> power;

    result = 1;

    for(int i = 0; i < power; i++) {
        result *= num;
    }

    cout << result;

}
