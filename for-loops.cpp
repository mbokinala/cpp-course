#include <iostream>

using namespace std;

main() {

    /*
        for(initialization; condition; inc/dec) {
                instruction to repeat [...]
        }
    */

    /*for(int i = 0; i < 10; i++) {
        cout << i << endl;
    } */

    int array[100];

    for(int i = 0; i < 100; i++) {
        array[i] = i;
        cout << array[i] << endl;
    }

}
