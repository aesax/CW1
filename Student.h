//
// Created by DELL on 2025/11/2.
//

#ifndef CC___STUDENT_H
#define CC___STUDENT_H

//#endif //CC___STUDENT_H
#include "Person.h"
#include <string>
#include <vector>

class Student : public Person {
private:
    std::string major;
    std::string level;
    int bookNumber;
    std::vector<std::string> books;
    std::vector<std::string> borrowTimes;

public:
    // Constructor
    Student(std::string n, std::string i, std::string c,
            std::string m, std::string l);

    // Getter methods
    std::string getMajor() const { return major; }
    std::string getLevel() const { return level; }
    int getBookNumber() const { return bookNumber; }

    // Book management method
    void borrowBook(const std::string& bookTitle);

    // Required methods
    void getBook() const;
    void displayInfo() const override;
};

#endif // STUDENT_H