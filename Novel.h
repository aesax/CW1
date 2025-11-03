//
// Created by DELL on 2025/11/2.
//

#ifndef CC___NOVEL_H
#define CC___NOVEL_H

//#endif //CC___NOVEL_H
#include "Book.h"
#include <string>

class Novel : public Book {
private:
    std::string genre;  // Genre of the novel

public:
    // Constructor
    Novel(std::string uid, std::string bid, std::string t,
          std::string a, int y, std::string g);
    virtual ~Novel();
    // Getter method
    std::string getGenre() const { return genre; }

    // Overridden methods
    std::string getCategory() override;
    void displayInfo() override;
};

#endif // NOVEL_H