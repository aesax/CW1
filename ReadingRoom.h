//
// Created by DELL on 2025/11/2.
//

#ifndef CC___READINGROOM_H
#define CC___READINGROOM_H

//#endif //CC___READINGROOM_H
#include "LibrarySpace.h"
#include <string>

class ReadingRoom : public LibrarySpace {
private:
    bool multiFunction;  // Whether it's a multi-function space

public:
    // Constructor
    ReadingRoom(std::string n, std::string l, int c, bool multi);

    // Getter method
    bool isMultiFunction() const { return multiFunction; }

    // Overridden method
    void displayInfo() const override;
};

#endif // READINGROOM_H