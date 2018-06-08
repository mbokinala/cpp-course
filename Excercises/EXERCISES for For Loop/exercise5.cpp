#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Write a program that asks the user to input an integer number. Then the program should print out
    in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
    every 5 asterisks printed.
*/

main() {
    beginning:

    int num;

    cout << "Enter number of asterisks: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        cout << "*";

        if(i % 5 == 0) {
            cout << endl;
        }
    }

    char cont;
    cout << endl << endl << "Again? (Y/N): ";
    cin >> cont;

    if(cont == 'Y' || cont == 'y') {
        system("cls");
        goto beginning;
    }
}
