//
// Created by DELL on 2025/11/2.
//
#include "ProfessionalBook.h"
#include <iostream>

ProfessionalBook::ProfessionalBook(std::string uid, std::string bid, std::string t,
                                   std::string a, int y, std::string f)
        : Book(uid, bid, t, a, y), field(f) {}

std::string ProfessionalBook::getCategory() {
    return "Professional Book - " + field;
}

void ProfessionalBook::displayInfo() {
    std::cout << "=== Professional Book Information ===" << std::endl;
    Book::displayInfo();
    std::cout << "Field: " << field << std::endl;
}
ProfessionalBook::~ProfessionalBook() = default;