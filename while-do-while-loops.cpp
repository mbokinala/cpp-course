#include <iostream>

using namespace std;

main() {
    const int SIZEOFARRAY = 10;
    int i = 0;
    int arr[SIZEOFARRAY];

    while(i < SIZEOFARRAY) { //while loop checks condition BEFORE execution of instructions
        arr[i] = 10 * i;
        cout << arr[i++] << endl;
    }

    do { //do while loop checks condition AFTER execution of instructions
        cout << "lalalala";
    } while(i);
}
