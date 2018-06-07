#include <iostream>

using namespace std;

/*
    Write an application that asks the user to input his age. Then using the conditional
    operator (ternary operator) check if the user age is higher or equal to 18.
*/

main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << ((age >= 18) ? "You are an adult!" : "You are not an adult!") << endl;
}
