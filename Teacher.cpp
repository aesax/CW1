//
// Created by DELL on 2025/11/2.
//
#include "Teacher.h"
#include <iostream>
#include <ctime>

// Constructor implementation
Teacher::Teacher(std::string n, std::string i, std::string c, std::string d)
        : Person(n, i, c), department(d), bookNumber(0) {}

// Borrow a book
void Teacher::borrowBook(const std::string& bookTitle) {
    if (bookNumber >= 5) {
        std::cout << "Cannot borrow more than 5 books!" << std::endl;
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
void Teacher::getBook() const {
    std::cout << "Books borrowed: " << bookNumber << "/5" << std::endl;
    if (bookNumber > 0) {
        std::cout << "Book titles and borrow times:" << std::endl;
        for (size_t i = 0; i < books.size(); i++) {
            std::cout << "  - " << books[i] << " (Borrowed at: " << borrowTimes[i] << ")" << std::endl;
        }
    }
}

// Display teacher information
void Teacher::displayInfo() const {
    std::cout << "=== Teacher Information ===" << std::endl;
    Person::displayInfo();
    std::cout << "Department: " << department << std::endl;
    getBook();
}