#include "Diary.h"
#include <iostream>
#include <string>

void Diary::addEntry() {
    std::cout << "Skriv din anteckning: "; // Ber användaren skriva in en anteckning
    std::string note; // Skapar en sträng för att lagra användarens inmatning
    std::cin.ignore(); // Rensar eventuella kvarvarande tecken i inmatningsbufferten (t.ex. från tidigare cin)
    std::getline(std::cin, note); // Läser in en hel rad från användaren och sparar den i 'note'
    entries.push_back(note); // Lägger till anteckningen i entries-vektorn (dagbokens lista)
    std::cout << "Anteckning sparad!\n"; // Bekräftelse till användaren att anteckningen har sparats
}

void Diary::showEntries() const {
    std::cout << "\nDina anteckningar:\n"; // Skriver ut en rubrik innan anteckningarna visas
    for (size_t i = 0; i < entries.size(); ++i) { // Loopar igenom alla anteckningar i vectorn 'entries'
        std::cout << i + 1 << ". " << entries[i] << '\n'; // Skriver ut numret på anteckningen (i+1 för att börja på 1) följt av själva anteckningen
    }
    if (entries.empty()) { // Om inga anteckningar finns i listan, skriv ut ett meddelande om det
        std::cout << "Inga anteckningar ännu.\n";
    }
}