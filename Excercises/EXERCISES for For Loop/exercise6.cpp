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

    int nums[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << "The number " << nums[i] << ((nums[i] % 2 == 0) ? " is even." : " is odd.") << endl;
    }

    char cont;
    cout << endl << endl << "Again? (Y/N): ";
    cin >> cont;

    if(cont == 'Y' || cont == 'y') {
        system("cls");
        goto beginning;
    }
}
