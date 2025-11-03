//
// Created by DELL on 2025/11/2.
//

#ifndef CC___BOOKROOM_H
#define CC___BOOKROOM_H

//#endif //CC___BOOKROOM_H
#include "LibrarySpace.h"
#include <string>

class BookRoom : public LibrarySpace {
private:
    std::string category;  // Category of books stored in the room

public:
    // Constructor
    BookRoom(std::string n, std::string l, int c, std::string cat);
    virtual ~BookRoom();
    // Getter method
    std::string getCategory() const { return category; }

    // Overridden method
    void displayInfo() const override;
};

#endif // BOOKROOM_H