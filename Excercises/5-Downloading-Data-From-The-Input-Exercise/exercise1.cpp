#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input three different line of text (3 strings) then using cout print the combination of the three in the console.
*/

main() {
    string line1, line2, line3;

    cout << "Enter line 1: ";
    cin >> line1;

    cout << "Enter line 2: ";
    cin >> line2;

    cout << "Enter line 3: ";
    cin >> line3;

    cout << line1 << " " << line2 << " " << line3;
}
