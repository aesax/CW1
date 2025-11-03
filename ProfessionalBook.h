//
// Created by DELL on 2025/11/2.
//

#ifndef CC___PROFESSIONALBOOK_H
#define CC___PROFESSIONALBOOK_H

//#endif //CC___PROFESSIONALBOOK_H
#include "Book.h"
#include <string>

class ProfessionalBook : public Book {
private:
    std::string field;  // Field of the professional book

public:
    // Constructor
    ProfessionalBook(std::string uid, std::string bid, std::string t,
                     std::string a, int y, std::string f);
    virtual ~ProfessionalBook();
    // Getter method
    std::string getField() const { return field; }

    // Overridden methods
    std::string getCategory() override;
    void displayInfo() override;
};

#endif // PROFESSIONALBOOK_H