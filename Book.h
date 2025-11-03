//
// Created by DELL on 2025/11/2.
//

#ifndef CC___BOOK_H
#define CC___BOOK_H

//#endif //CC___BOOK_H
#include <string>
#include "Date.h"
#include "Person.h"
class Book {
protected:
    std::string uuid;
    std::string bookId;
    std::string title;
    std::string author;
    int publishYear;
    bool isBorrowed;
    std::string borrowedBy;
    std::string borrowTime;

public:
    Book(std::string uid, std::string bid, std::string t, std::string a, int y);
    virtual ~Book();

    std::string getUUID() const { return uuid; }
    std::string getBookId() const { return bookId; }
    std::string getTitle() const { return title; }
    bool getIsBorrowed() const { return isBorrowed; }
    std::string getBorrowedBy() const { return borrowedBy; }
    std::string getBorrowTime() const { return borrowTime; }

    void setBorrowed(bool borrowed, const std::string& borrower = "");

    virtual std::string getCategory() = 0;
    virtual void displayInfo() = 0;
};

#endif // BOOK_H