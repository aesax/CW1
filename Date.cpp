//
// Created by DELL on 2025/11/2.
//
#include "Date.h"
#include <ctime>
#include <string>

Date::Date() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    year = 1900 + ltm->tm_year;
    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
}

Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

std::string Date::toString() const {
    return std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day);
}
Date::~Date() = default;