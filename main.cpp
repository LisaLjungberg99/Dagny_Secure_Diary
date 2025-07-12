#include <iostream>
#include "Diary.h"

using namespace std;

int main() {
    Diary myDiary;

    int choice;
    do {
        cout << "\nWhat would you like to do?\n";
        cout << "1. Write a diary entry\n";
        cout << "2. Remove a diary entry\n";
        cout << "3. Show all diary entries\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            myDiary.addEntry();
        } else if (choice == 2) {
            myDiary.removeEntry();
        } else if (choice == 3) {
            myDiary.showEntries();
        } else if (choice != 0) {
            cout << "Invalid choice, try again.\n";
        }
    } while (choice != 0);

    cout << "Bye!\n";
    return 0;
}
