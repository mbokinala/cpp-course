#include <cstdlib>
#include <iostream>

using namespace std;

/*
    Using SWITCH modify the vending machine program from the Conditional Statements. Write a program
    imitating a vending machine. The program should present the user with a choice of 6 products of
    your choice (Coke, Water, Chocolate Bar etc). Then allow the user to choose a product by entering
    a number 1-6. Add an exception for invalid input if the user inputs a number which doesn't
    correspond to any choice.
*/

main() {
    beginning:

    int choice;
    /*
        1. Coca-Cola
        2. Chocolate Bar
        3. Water
        4. Beef Jerky
        5. Rice Krispies
        6. Jam Filled Cookie Thing
    */

    cout << "1. Coca-Cola" << endl;
    cout << "2. Chocolate Bar" << endl;
    cout << "3. Water" << endl;
    cout << "4. Beef Jerky" << endl;
    cout << "5. Rice Krispies" << endl;
    cout << "6. Jam Filled Cookie Thing" << endl;
    cout << "Make a selection: ";
    cin >> choice;

    system("cls");
    switch(choice) {
        case 1: {
            cout << "Dispensing Coca-Cola" << endl;
            break;
        } case 2: {
            cout << "Dispensing Chocolate Bar" << endl;
            break;
        } case 3: {
            cout << "Dispensing Water" << endl;
            break;
        } case 4: {
            cout << "Dispensing Beef Jerky" << endl;
            break;
        } case 5: {
            cout << "Dispensing Rice Krispies" << endl;
            break;
        } case 6: {
            cout << "Dispensing Jam Filled Cookie Thing" << endl;
            break;
        } default: {
            cout << "Invalid Choice." << endl;
            break;
        }
    }

    char cont;
    cout << "Make another choice? (Y/N): ";
    cin >> cont;

    if(cont == 'Y' || cont == 'y') {
        system("cls");
        goto beginning;
    }
}
