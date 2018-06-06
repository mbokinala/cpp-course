#include <iostream>

using namespace std;

/*
    Basing on the knowledge about conditional statements, once again
    modify the exercise from the lecture about logical and relational operators.
    Write a program that asks the user to input three integer numbers.
    The first two should represent the minimum and maximum value of the interval
    respectively. Then the program should check if the third number is contained within the interval.
    The user should be informed if the number belongs or if it doesn't belong to the interval.
*/

main() {
    int minVal, maxVal, checkVal;

    cout << "Enter minimum value: ";
    cin >> minVal;

    cout << "Enter maximum value: ";
    cin >> maxVal;

    cout << "Enter value to check: ";
    cin >> checkVal;

    if (checkVal >= minVal && checkVal <= maxVal) {
        cout << checkVal << " is between " << minVal << " and " << maxVal << endl;
    } else {
        cout << checkVal << " is not between " << minVal << " and " << maxVal << endl;
    }
}
