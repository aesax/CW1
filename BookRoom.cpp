//
// Created by DELL on 2025/11/2.
//
#include "BookRoom.h"
#include <iostream>

// Constructor implementation
BookRoom::BookRoom(std::string n, std::string l, int c, std::string cat)
        : LibrarySpace(n, l, c), category(cat) {}

// Display book room information
void BookRoom::displayInfo() const {
    std::cout << "=== Book Room Information ===" << std::endl;
    LibrarySpace::displayInfo();
    std::cout << "Book Category: " << category << std::endl;
    displayStoredBooks();
}
BookRoom::~BookRoom() = default;