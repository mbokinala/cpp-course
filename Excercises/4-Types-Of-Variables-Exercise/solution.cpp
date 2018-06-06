#include <iostream>

using namespace std;

main() {
    //Exercise 1
    char a; // character 1 byte
    int b; // integer 4 bytes
    short c; // integer 2 bytes
    float d; // real number 4 bytes
    double e; // real number 8 bytes

    cout << "end of exercise 1. press any key to continue" << endl;
    cin.get();

    //Exercise 2
    a = 98;
    b = 9;
    c = 10;
    d = 5.29;
    e = 6.87;

    cout << "a: " << a << " &a: " << &a << endl;
    cout << "b: " << b << " &b: " << &b << endl;
    cout << "c: " << c << " &c: " << &c << endl;
    cout << "d: " << d << " &d: " << &d << endl;
    cout << "e: " << e << " &e: " << &e << endl;

    cout << "end of exercise 2. press any key to continue" << endl;
    cin.get();

    short roomNumber = 10;
    short floorLevel = 7;
    string firstName = "Joana", lastName = "Smith";
    bool hasMeals = true;

    cout << "end of exercise 3. press any key to continue" << endl;
    cin.get();
}
