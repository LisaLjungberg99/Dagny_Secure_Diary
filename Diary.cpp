#include "Diary.h"
#include <iostream>
#include <string>

using namespace std; 

void Diary::addEntry() {
    cout << "Write your entry: ";
    string note;
    cin.ignore();
    getline(cin, note);
    entries.push_back(note);
    cout << "Entry saved!\n";
}

void Diary::removeEntry() {
    if (entries.empty()) {
        cout << "No enties to remove.\n";
        return;
    }

    cout << "\nWhich note would you like to remove? (enter number):\n";
    showEntries(); // show the list first
    int index;
    cout << " : ";
    cin >> index;

    // Control that the index is valid
    if (index > 0 && index <= static_cast<int>(entries.size())) {
        entries.erase(entries.begin() + (index - 1));
        cout << "Etry removed.\n";
    } else {
        cout << "Invalid number.\n";
    }
}

void Diary::showEntries() const {
    cout << "\nYour entries:\n";
    if (entries.empty()) {
        cout << "No entries yet.\n";
    } else {
        for (size_t i = 0; i < entries.size(); ++i) {
            cout << i + 1 << ". " << entries[i] << '\n';
        }
    }
}
