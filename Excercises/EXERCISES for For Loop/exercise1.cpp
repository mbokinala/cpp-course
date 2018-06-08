#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input an integer number. Then starting from that
    number the program prints out in the console next 100 numbers.
*/

main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = n; i <= n + 100; i++) {
        cout << i << endl;
    }
}
