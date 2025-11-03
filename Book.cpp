//
// Created by DELL on 2025/11/2.
//
#include "Book.h"
#include <iostream>
#include <chrono>
#include <ctime>

Book::Book(std::string uid, std::string bid, std::string t, std::string a, int y)
        : uuid(uid), bookId(bid), title(t), author(a), publishYear(y),
          isBorrowed(false), borrowedBy(""), borrowTime("") {}


void Book::setBorrowed(bool borrowed, const std::string& borrower) {
    isBorrowed = borrowed;
    if (borrowed && !borrower.empty()) {
        borrowedBy = borrower;
        std::time_t now = std::time(nullptr);
        borrowTime = std::ctime(&now);
        if (!borrowTime.empty() && borrowTime.back() == '\n') {
            borrowTime.pop_back();
        }
    } else {
        borrowedBy = "";
        borrowTime = "";
    }
}

// Add displayInfo
void Book::displayInfo() {
    std::cout << "=== Book Information ===" << std::endl;
    std::cout << "UUID: " << uuid << std::endl;
    std::cout << "BookID: " << bookId << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publish Year: " << publishYear << std::endl;
    std::cout << "Status: " << (isBorrowed ? "Borrowed" : "Available") << std::endl;
    if (isBorrowed) {
        std::cout << "Borrowed by: " << borrowedBy << std::endl;
        std::cout << "Borrow time: " << borrowTime << std::endl;
    }
    std::cout << "Category: " << getCategory() << std::endl;
}
Book::~Book() = default;