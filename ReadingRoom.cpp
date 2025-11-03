//
// Created by DELL on 2025/11/2.
//
#include "ReadingRoom.h"
#include <iostream>

// Constructor implementation
ReadingRoom::ReadingRoom(std::string n, std::string l, int c, bool multi)
        : LibrarySpace(n, l, c), multiFunction(multi) {}

// Display reading room information
void ReadingRoom::displayInfo() const {
    std::cout << "=== Reading Room Information ===" << std::endl;
    LibrarySpace::displayInfo(); // 调用基类显示基本信息
    std::cout << "Multi-function: " << (multiFunction ? "Yes" : "No") << std::endl;
    displayStoredBooks(); // Display stored books information
}