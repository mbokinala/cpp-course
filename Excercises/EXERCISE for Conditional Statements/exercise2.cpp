#include <iostream>

using namespace std;

/*
    Modify the Exercise 1 in order to prevent a situation where maximum value inputted is lower than the
    minimum value. The user should see an error. And the program should stop.
*/

main() {
    int minVal, maxVal, checkVal;

    cout << "Enter minimum value: ";
    cin >> minVal;

    cout << "Enter maximum value: ";
    cin >> maxVal;

    if(maxVal < minVal){
        cout << "Error. Maximum value cannot be lower than the minimum value." << endl;
        return 0;
    }

    cout << "Enter value to check: ";
    cin >> checkVal;

    if (checkVal >= minVal && checkVal <= maxVal) {
        cout << checkVal << " is between " << minVal << " and " << maxVal << endl;
    } else {
        cout << checkVal << " is not between " << minVal << " and " << maxVal << endl;
    }
}
