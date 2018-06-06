#include <iostream>

using namespace std;

main() {
    int x = 53;

    switch(x) {
        case 1: {
            cout << "x is 1" << endl;
            break;
        }
        case 50: {
            cout << "x is 50" << endl;
            break;
        }
        default: {
            cout << "yo default" << endl;
            break;
        }
    }
}
