#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input three integer numbers. The first two should
    represent the minimum and maximum value of the interval respectively. Then the program
    should check if the third number is greater or equal to the minimum value and if it is
    lower or equal to the maximum value. The result should be expressed with two sentences
    and logical result using boolean type variable.
*/

main() {
    int minBound, maxBound, checkValue;
    bool greaterEqualMin, lowerEqualMax;

    cout << "Enter minimum value: ";
    cin >> minBound;

    cout << "Enter maximum value: ";
    cin >> maxBound;

    cout << "Enter value to check: ";
    cin >> checkValue;

    greaterEqualMin = checkValue >= minBound;
    lowerEqualMax = checkValue <= maxBound;

    cout << "Is the value " << checkValue << " greater than or equal to min value? " << greaterEqualMin << endl;
    cout << "Is the value " << checkValue << " lesser than or equal to max value? " << lowerEqualMax << endl;
}
