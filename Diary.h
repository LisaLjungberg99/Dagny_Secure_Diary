#ifndef DIARY_H
#define DIARY_H

#include <string>
#include <vector>

class Diary {
    std::vector<std::string> entries;  // Lista med anteckningar

public:
    void addEntry();
    void showEntries() const; // Ändra inget i anteckningarna
};

#endif