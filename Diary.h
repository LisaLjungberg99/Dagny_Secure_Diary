#ifndef DIARY_H
#define DIARY_H

#include <string>
#include <vector>

class Diary {
    std::vector<std::string> entries;
public:
    void addEntry();
    void showEntries() const;
};

#endif
