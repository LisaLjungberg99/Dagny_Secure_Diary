#include <iostream>
#include "Diary.h"

int main() {
    Diary myDiary;

    int choice;
    do {
        std::cout << "\nVad vill du göra?\n";
        std::cout << "1. Skriv en ny anteckning\n";
        std::cout << "2. Visa alla anteckningar\n";
        std::cout << "0. Avsluta\n";
        std::cout << "Välj: ";
        std::cin >> choice;

        if (choice == 1) {
            myDiary.addEntry();
        } else if (choice == 2) {
            myDiary.showEntries();
        } else if (choice != 0) {
            std::cout << "Ogiltigt val, försök igen.\n";
        }
    } while (choice != 0);

    std::cout << "Hejdå!\n";
    return 0;
}
