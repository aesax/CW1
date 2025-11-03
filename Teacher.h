//
// Created by DELL on 2025/11/2.
//

#ifndef CC___TEACHER_H
#define CC___TEACHER_H

//#endif //CC___TEACHER_H
#include "Person.h"
#include <string>
#include <vector>

class Teacher : public Person {
private:
    std::string department;
    int bookNumber;
    std::vector<std::string> books;
    std::vector<std::string> borrowTimes;

public:
    // Constructor
    Teacher(std::string n, std::string i, std::string c, std::string d);

    // Getter methods
    std::string getDepartment() const { return department; }
    int getBookNumber() const { return bookNumber; }

    // Book management method
    void borrowBook(const std::string& bookTitle);

    // Required methods
    void getBook() const;
    void displayInfo() const override;
};

#endif // TEACHER_H