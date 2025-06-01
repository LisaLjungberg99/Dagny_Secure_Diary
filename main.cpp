#include <vector>
#include <iostream>
#include <string>
std:: vector <std::string> diaryNotes = {};

void addNewDiaryNote() {
    std::string note;
    std::cout << "Skriv din dagboksanteckning: " << '\n';
    std::getline(std::cin, note); // tar emot hela raden inkl. mellanslag
    diaryNotes.push_back(note);   // lägg till anteckningen i vektorn
    std::cout << "Anteckning sparad!\n";
}

int main() {
    int userInput;
    std:: cout << "Vad vill du göra idag?" << '\n';
    std::cout << "1. Skriva en ny dagboksanteckning" << '\n';
    std::cout << "Välj: " ;
    std::cin >> userInput;
    if (userInput == 1) {
        addNewDiaryNote();
    }

return 0;
}



