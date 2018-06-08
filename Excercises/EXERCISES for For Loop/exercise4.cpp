#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Write a program that asks the user to input any integer number n. Then calculate the result
    of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial
    as well as the factorial of numbers before n.
*/

main() {
    beginning:

    int num, result = 1;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        result *= i;
    }

    cout << result << endl;

    char cont;
    cout << "Again? (Y/N): ";
    cin >> cont;

    if(cont == 'Y' || cont == 'y') {
        system("cls");
        goto beginning;
    }
}
