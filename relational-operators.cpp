#include <iostream>

using namespace std;

main() {
    int a = 10;
    int b = 5;

    cout << "a == b: " << (a == b) << endl; //returns true (1) when both values are the same
    cout << "a != b: " << (a != b) << endl; //returns true (1) when both values are not the same

    cout << endl;

    cout << "a > b: " << (a > b) << endl; //returns true (1) when first value is greater than or equal to than second value
    cout << "a < b: " << (a < b) << endl; //returns true (1) when first value is less than second value

    cout << endl;

    cout << "a >= b: " << (a >= b) << endl; //returns true (1) when first value is greater than or equal to than second value
    cout << "a <= b: " << (a <= b) << endl; //returns true (1) when first value is less than or equal to than second value

    cout << endl;

    cout << "!(a == b) = " << !(a == b) << endl; // ! makes boolean opposite (0 --> 1) (1 --> 0)
}
