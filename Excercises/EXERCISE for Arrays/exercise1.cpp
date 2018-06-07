#include <iostream>

using namespace std;

/*
    Write an application that asks the user to input four numbers. The inputted numbers should be stored in a 4 element array of doubles.
    The numbers should be summed and the result printed in the console as well as the address of first and last element of the array.
*/

main() {
    int nums[4];

    cout << "Enter number 1: ";
    cin >> nums[0];

    cout << "Enter number 2: ";
    cin >> nums[1];

    cout << "Enter number 3: ";
    cin >> nums[2];

    cout << "Enter number 4: ";
    cin >> nums[3];

    cout << "User input: " << endl;
    cout << "val 1: " << nums[0] << endl;
    cout << "val 2: " << nums[1] << endl;
    cout << "val 3: " << nums[2] << endl;
    cout << "val 4: " << nums[3] << endl;

    cout << "Sum: " << nums[0] + nums[1] + nums[2] + nums[3] << endl;
    cout << "Address of first element = " << &nums[0] << endl;
    cout << "Address of last element = " << &nums[3] << endl;
}
