#include <iostream>

using namespace std;

/*
    Basing on the knowledge of logical operators try to modify the exercise from the lecture.
    Write a program that asks the user to input three integer numbers. The first two should
    represent the minimum and maximum value of the interval respectively. Then the program
    should check if the third number is contained within the interval. The result should be
    expressed with sentence and logical result using boolean type variable.
*/

main() {
    int minBound, maxBound, checkValue;
    bool withinBounds;
    cout << "Enter minimum value: ";
    cin >> minBound;

    cout << "Enter maximum value: ";
    cin >> maxBound;

    cout << "Enter value to check: ";
    cin >> checkValue;

    withinBounds = checkValue >= minBound && checkValue <= maxBound;

    cout << "Is the number " << checkValue << " contained in the interval from " << minBound << " to " << maxBound << "? " << withinBounds;
}
