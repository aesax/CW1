//
// Created by DELL on 2025/11/2.
//
#include "Person.h"
#include <iostream>

// 构造函数实现
Person::Person(std::string n, std::string i, std::string c)
        : name(n), id(i), contact(c) {
    // 可以在这里加日志或验证
    // 例如：if (n.empty()) throw std::invalid_argument("Name cannot be empty");
}



// 虚函数 displayInfo 实现
void Person::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Contact: " << contact << std::endl;
}
Person::~Person() = default;