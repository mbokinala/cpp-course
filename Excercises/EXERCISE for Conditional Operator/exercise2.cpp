#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Write an application that asks the user to input the points he achieved on an exam.
    If the number of points was higher than 50 the user should be notified that he/she passed
    the exam - use the conditional operator. The number of points which a student was able to
    from the exam was from 0 - 100 hence, if the user inputs a number which doesn't
    belong to this interval the output should be an error message.
*/

main() {
    beginning:

    int score;

    cout << "Enter score: ";
    cin >> score;

    if(score < 0 || score > 100) {
        cout << "Invalid score!" << endl;
    } else {
        cout << ((score > 50) ? "You passed the exam!" : "You didn't pass the exam!") << endl;
    }

    char choice;
    cout << "Again? (Y/N): ";
    cin >> choice;

    if(choice == 'Y' || choice == 'y') {
        system("cls");
        goto beginning;
    }
}
