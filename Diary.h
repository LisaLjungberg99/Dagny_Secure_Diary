#ifndef DIARY_H
#define DIARY_H

#include <string>
#include <vector>

using namespace std; 

class Diary {
    vector<string> entries;
public:
    void addEntry();
    void removeEntry();
    void showEntries() const;
};

#endif
