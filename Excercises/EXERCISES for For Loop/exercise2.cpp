#include <iostream>

using namespace std;

/*
    Write a program that prints out in the console all upper case and lower case letters from
    the alphabet (A-Z).
*/

main() {
    char lowercaseLetter = 'a', uppercaseLetter = 'A';

    for(int i = 0; i <= ('Z' - 'A'); i++){
        cout << uppercaseLetter << lowercaseLetter << " ";

        lowercaseLetter++;
        uppercaseLetter++;
    }
}
