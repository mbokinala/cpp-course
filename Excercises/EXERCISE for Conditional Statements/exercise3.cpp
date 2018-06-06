#include <iostream>

using namespace std;

/*
    Write a program immitating a vending machine. The program should present the user
    with a choice of 6 products of your choice (Coke, Water, Chocolate Bar etc). Then allow
    the user to choose a product by entering a number 1-6. Add an exception for invalid input
    if the user inputs a number which doesn't correspond to any choice.
*/

main() {
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

    if(choice == 1) {
        cout << "Dispensing COCA-COLA...";
    } else if (choice == 2) {
        cout << "Dispensing CHOCOLATE BAR...";
    } else if (choice == 3) {
        cout << "Dispensing WATER...";
    } else if (choice == 4) {
        cout << "Dispensing BEEF JERKY...";
    } else if (choice == 5) {
        cout << "Dispensing RICE KRISPIES...";
    } else if (choice == 6) {
        cout << "Dispensing JAM FILLED COOKIE THING...";
    } else {
        cout << "Invalid Choice";
    }
}
