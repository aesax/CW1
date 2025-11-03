//
// Created by DELL on 2025/11/2.
//
#include "Novel.h"
#include <iostream>

Novel::Novel(std::string uid, std::string bid, std::string t,
             std::string a, int y, std::string g)
        : Book(uid, bid, t, a, y), genre(g) {}

std::string Novel::getCategory() {
    return "Novel - " + genre;
}

void Novel::displayInfo() {
    std::cout << "=== Novel Information ===" << std::endl;
    Book::displayInfo();
    std::cout << "Genre: " << genre << std::endl;
}
Novel::~Novel() = default;