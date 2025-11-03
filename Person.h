//
// Created by DELL on 2025/11/2.
//

#ifndef CC___PERSON_H
#define CC___PERSON_H

//#endif //CC___PERSON_H
#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    std::string id;
    std::string contact;

public:
    Person(std::string n, std::string i, std::string c);
    virtual ~Person() ;

    // Getter methods
    std::string getName() const { return name; }
    std::string getId() const { return id; }
    std::string getContact() const { return contact; }

    virtual void displayInfo() const;
};

#endif // PERSON_H