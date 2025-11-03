//
// Created by DELL on 2025/11/2.
//
#include "LibrarySpace.h"
#include "Book.h"
#include <iostream>

// Constructor
LibrarySpace::LibrarySpace(std::string n, std::string l, int c)
        : name(n), location(l), capacity(c) {}


// Add a book
void LibrarySpace::addBook(const std::string& bookTitle) {
    storedBooks.push_back(bookTitle);
}

// Display stored books
void LibrarySpace::displayStoredBooks() const {
    std::cout << "Books stored in this room:" << std::endl;
    if (storedBooks.empty()) {
        std::cout << "  There is no books stored." << std::endl;
    } else {
        for (size_t i = 0; i < storedBooks.size(); i++) {
            std::cout << "  " << (i + 1) << ". " << storedBooks[i] << std::endl;
        }
        std::cout << "Total books: " << storedBooks.size() << std::endl;
    }
}

// Display space info
void LibrarySpace::displayInfo() const {
    std::cout << "Space Name: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Capacity: " << capacity << std::endl;
    displayStoredBooks();
}
LibrarySpace::~LibrarySpace() = default;