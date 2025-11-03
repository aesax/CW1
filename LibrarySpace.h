//
// Created by DELL on 2025/11/2.
//

#ifndef CC___LIBRARYSPACE_H
#define CC___LIBRARYSPACE_H

//#endif //CC___LIBRARYSPACE_H
#include <string>
#include <iostream>
#include <vector>

class LibrarySpace {
protected:
    std::string name;
    std::string location;
    int capacity;
    std::vector<std::string> storedBooks;

public:
    // Constructor
    LibrarySpace(std::string n, std::string l, int c);

    // Destructor
    virtual ~LibrarySpace();

    // Getter methods
    std::string getName() const{return name;}
    std::string getLocation() const{return location;}
    int getCapacity() const{return capacity;}

    // Book management
    void addBook(const std::string& bookTitle);
    void displayStoredBooks() const;

    // Virtual method
    virtual void displayInfo() const;
};

#endif // LIBRARYSPACE_H