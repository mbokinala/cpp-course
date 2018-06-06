#include <iostream>

using namespace std;
// Variables

main() {
    /* Variable constructions:

        1. TYPE_OF_VARIABLE nameOfVariable
        2. TYPE_OF_VARIABLE nameOfVariable = valueOfVariable
        3. TYPE_OF_VARIABLE nameOfVariable1, nameOfVariable2, nameOfVariable3

    */

    int a = 40, b = 0, c = 20; // -2 billion to 2 billion - 4 BYTES

    cout << "a: " << a << " address: " << &a << endl;
    cout << "b: " << b << " address: " << &b << endl;
    cout << "c: " << c << " address: " << &c << endl;

    short t1 = 5.6; // -32768 tot 32767 2 BYTES
    cout << "t1: " << t1 << endl;

    float t2 = 5.12; // 4 BYTES - numbers up to 38 zeros
    double t3 = 5.12; // 8 BYTES - numbers up to 308 zeros
    cout << "t2: " << t2 << endl;
    cout << "t3: " << t3 << endl;

    char t4; //character
    t4 = 'a';
    cout << "t4: " << t4 << endl;\

    string t5 = "Hello World :-)";
    cout << "t5: " << t5 << endl;

    string x = "part1";
    string y = "part2";
    string combinedStrings = x + " " + y;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "x + y: " << combinedStrings << endl;

    //boolean - true or false - 0 = false, anything else = true
    bool t6 = true;
    cout << "t6: " << t6 << endl;

    //unsigned short int - 0 to 65535
    unsigned short t7 = 3700;
    cout << "t7: " << t7 << endl;

    const string NAMEOFGAME = "Conqueror of C++";
    cout << "Name of Game: " << NAMEOFGAME << endl;
}

