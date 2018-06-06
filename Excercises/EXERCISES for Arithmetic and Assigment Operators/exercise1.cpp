#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input a value of length expressed in inches, convert
    it to centimeters and print in the console.
*/

main() {
    float inches, centimeters;

    cout << "Enter length in inches: ";
    cin >> inches;

    centimeters = inches * 2.54;

    cout << inches << " inches is " << centimeters << " centimeters";
}
