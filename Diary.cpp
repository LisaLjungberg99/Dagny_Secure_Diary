#include "Diary.h"
#include <iostream>
#include <string>

void Diary::addEntry() {
    std::cout << "Skriv din anteckning: ";
    std::string note;
    std::cin.ignore();
    std::getline(std::cin, note);
    entries.push_back(note);
    std::cout << "Anteckning sparad!\n";
}

void Diary::showEntries() const {
    std::cout << "\nDina anteckningar:\n";
    if (entries.empty()) {
        std::cout << "Inga anteckningar ännu.\n";
    } else {
        for (size_t i = 0; i < entries.size(); ++i) {
            std::cout << i + 1 << ". " << entries[i] << '\n';
        }
    }
}
