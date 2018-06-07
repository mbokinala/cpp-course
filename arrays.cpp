#include <iostream>

using namespace std;

main() {

    int array[4];

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;
    //array[4] - can't do that - 4th index does not exist - will overwrite existing memory - only 16 bytes allocated (4 items * 4 bytes per item);

    cout << "array[0] = " << array[0] << ", address is " << &array[0] << endl;
    cout << "array[1] = " << array[1] << ", address is " << &array[1] << endl;
    cout << "array[2] = " << array[2] << ", address is " << &array[2] << endl;
    cout << "array[3] = " << array[3] << ", address is " << &array[3] << endl;

}
