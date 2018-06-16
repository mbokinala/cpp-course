#include <iostream>
#include <stdlib.h>
#include <cstdlib>

/*
    Modify exercise 1 in order to stop the program if the PIN code was entered wrongly 5 times.
The user should be informed how many tries are left.

*/

using namespace std;

main() {
    int pin, checkpin = -500, tries = 5;

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

    do {
        cout << "Input your pin(" << tries << " tries left):";
        cin >> checkpin;
        tries--;
    } while(tries != 0 && checkpin != pin);

    if(tries == 0) {
        cout << "You have entered an incorrect pin 5 times. System locked. Surprise loading..." << endl;
        _sleep(2000);
    }

    for (int i = 0; i > -2; i++){
        cout << "*";
        if(i % 500 == 0) {
            cout << endl;
        }
    }
}
