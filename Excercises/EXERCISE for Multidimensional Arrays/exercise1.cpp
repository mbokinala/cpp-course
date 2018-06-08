#include <iostream>

using namespace std;

/*
    Create a two dimensional 3x3 array of integers that holds some numbers of your choice (each array cell should be
    initialised in program).

    Write a program that asks the user to input x and y numbers (from 1 to 3). The program prints out
    in the console the value that is stored in the array cell numbered by x, y coordinates.
    Take into consideration that coordinates starts counting from ONE when array starts counting from ZERO.
*/

main() {
    beginning:

    int nums[3][3];

    nums[0][0] = 7;
    nums[0][1] = 2;
    nums[0][2] = 6;

    nums[1][0] = 4;
    nums[1][1] = 8;
    nums[1][2] = 3;

    nums[2][0] = 9;
    nums[2][1] = 5;
    nums[2][2] = 1;

    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Value at (" << x << ", " << y << ") is " << nums[x-1][y-1] << endl;

    char cont;
    cout << "Again? (Y/N): ";
    cin >> cont;

    if(cont == 'Y' || cont == 'y') {
        goto beginning;
    }
}
