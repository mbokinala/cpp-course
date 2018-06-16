#include <iostream>
#include <stdlib.h>
#include <cstdlib>

/*
    Write a program that asks the user to input a PIN code for the first time. Then using
    the while (or do while) loop ask the user to input the PIN code again. If the PIN code is
    wrong, the user should input it again (until the number is correct).

*/

using namespace std;

main() {
    int pin, checkpin = -500;

    cout << "Enter a PIN: ";
    cin >> pin;

    cout << "Securing data (0 of 270 bytes)";

    for(int i = 0; i <= 320; i++) { //This is for cool effect
        cout << ".";
        _sleep(10);

        if(i % 3 == 0) {
            system("cls");
            cout << "Enter a PIN: " << pin << endl;
            cout << "Securing data (" << i / 4 << " out of 80 bytes)";
        }
    }

    system("cls");

    while(checkpin != pin) {
        cout << "Please enter your pin: ";
        cin >> checkpin;
    }

    cout << "Correct PIN!";
}
