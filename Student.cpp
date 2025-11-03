//
// Created by DELL on 2025/11/2.
//
#include "Student.h"
#include <iostream>
#include <ctime>

// Constructor implementation
Student::Student(std::string n, std::string i, std::string c,
                 std::string m, std::string l)
        : Person(n, i, c), major(m), level(l), bookNumber(0) {}

// Borrow a book
void Student::borrowBook(const std::string& bookTitle) {
    if (bookNumber >= 2) {
        std::cout << "Cannot borrow more than 2 books." << std::endl;
        return;
    }
    books.push_back(bookTitle);

    // Record current borrow time
    std::time_t now = std::time(nullptr);
    std::string timeStr = std::ctime(&now);
    if (!timeStr.empty() && timeStr.back() == '\n') {
        timeStr.pop_back();
    }
    borrowTimes.push_back(timeStr);

    bookNumber++;
    std::cout << "Book '" << bookTitle << "' borrowed successfully at " << timeStr << std::endl;
}

// Show borrowed books information
void Student::getBook() const {
    std::cout << "Books borrowed: " << bookNumber << "/2" << std::endl;
    if (bookNumber > 0) {
        std::cout << "Book titles and borrow times:" << std::endl;
        for (size_t i = 0; i < books.size(); i++) {
            std::cout << "  - " << books[i] << " (Borrowed at: " << borrowTimes[i] << ")" << std::endl;
        }
    }
}

// Display student information
void Student::displayInfo() const {
    std::cout << "=== Student Information ===" << std::endl;
    Person::displayInfo();
    std::cout << "Major: " << major << std::endl;
    std::cout << "Level: " << level << std::endl;
    getBook();
}