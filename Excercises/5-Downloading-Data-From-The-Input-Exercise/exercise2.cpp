#include <iostream>

using namespace std;

/*

    Using the console input write a program that asks the user to input two integer numbers.
    After that, swap (exchange) the values inputted and print them in the console.
*/

main() {
    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << endl;

    int c;
    c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
