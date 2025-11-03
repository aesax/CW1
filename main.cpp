//
// Created by DELL on 2025/11/2.
//
#include <memory>
#include "Student.h"
#include "Teacher.h"
#include "BookRoom.h"
#include "ReadingRoom.h"
#include "ProfessionalBook.h"
#include "Novel.h"
#include "LibrarySpace.h"
#include "Person.h"

int main() {
    std::cout << "=== Library Management System ===" << std::endl;
    std::cout << "=================================" << std::endl << std::endl;

    // ==================== Create Student Objects ====================
    std::cout << "1. Creating Student Objects" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    // Value definition - My basic information
    Student student1("Wendy", "202318010321", "19141399916", "Computer Science", "Junior");

    // Value definition
    Student student2("Allen", "202418010411", "18291736271", "Accounting", "Sophomore");

    // Reference definition
    Student student3("Guo chao", "2025010411", "16826389012", "Digital Media Technology", "Freshman");
    Student &student3_ref = student3;

    // Students borrow books
    student1.borrowBook("C++ Programming");
    student1.borrowBook("Python Programming");
    student1.borrowBook("Algorithm Design"); // fail, because up to two books

    student2.borrowBook("Java Programming");

    student3_ref.borrowBook("Machine Learning");
    student3_ref.borrowBook("Software Development");

    // Display student information
    student1.displayInfo();
    std::cout << std::endl;
    student2.displayInfo();
    std::cout << std::endl;
    student3_ref.displayInfo();
    std::cout << std::endl;

    // ==================== Create Teacher Objects ====================
    std::cout << "2. Creating Teacher Objects..." << std::endl;
    std::cout << "---------------------------------" << std::endl;

    // Value definition - My real instructor information
    Teacher teacher1("Leon Liang", "8306", "leon@zy.cdut.edu.cn", "Computer Science Department");

    // Reference definition
    Teacher teacher2("Sir Obed T. Nartey, Ph.D. ", "8306", "albert.xu@zy.cdut.edu.cn", "Computer Science Department");
    Teacher &teacher2_ref = teacher2;

    // Teachers borrow books
    teacher1.borrowBook("Network Security Essentials");
    teacher1.borrowBook("Software Engineering");
    teacher1.borrowBook("The C++ Programming Language");
    teacher1.borrowBook("Computer Networks");
    teacher1.borrowBook("Introduction to Machine Learning");
    teacher1.borrowBook("Computer Graphics"); // fail, because up to five books

    teacher2_ref.borrowBook("Database Systems");

    // Display teacher information
    teacher1.displayInfo();
    std::cout << std::endl;
    teacher2_ref.displayInfo();
    std::cout << std::endl;

    // ==================== Create Book Room Objects ====================
    std::cout << "3. Creating Book Room Objects..." << std::endl;
    std::cout << "---------------------------------" << std::endl;

    // Value definition
    BookRoom bookRoom1("Literature Room", "Library 4th Floor Room 411", 4110, "Literature");

    // Reference definition
    BookRoom bookRoom2("History Room", "Library 2nd Floor Room 206", 6000, "History");
    BookRoom &bookRoom2_ref = bookRoom2;

    // Add books to book rooms
    bookRoom1.addBook("War and Peace");
    bookRoom1.addBook("Crime and Punishment");
    bookRoom1.addBook("One Hundred Years of Solitude");
    bookRoom1.addBook("The Brothers Karamazov");
    bookRoom1.addBook("Madame Bovary");

    bookRoom2_ref.addBook("The History of the Tang Dynasty");
    bookRoom2_ref.addBook("The History of the Three Kingdoms");
    bookRoom2_ref.addBook("The History of the Sui Dynasty");
    bookRoom2_ref.addBook("The History of the Yuan Dynasty");
    bookRoom2_ref.addBook("The History of the Republic of China");

    // Display book room information
    bookRoom1.displayInfo();
    std::cout << std::endl;
    bookRoom2_ref.displayInfo();
    std::cout << std::endl;

    // ==================== Create Reading Room Objects ====================
    std::cout << "4. Creating Reading Room Objects..." << std::endl;
    std::cout << "---------------------------------" << std::endl;

    // Value definition - Multi-functional reading room
    ReadingRoom readingRoom1("Multi-functional Reading Room", "Library Study Room 606", 260, true);

    // Reference definition - Normal reading room
    ReadingRoom readingRoom2("Normal Reading Room", "Library Normal Room 208", 190, false);
    ReadingRoom &readingRoom2_ref = readingRoom2;

    // Add books to reading rooms
    readingRoom1.addBook("Science Journals");
    readingRoom1.addBook("Research Reports");

    readingRoom2_ref.addBook("Newspapers");
    readingRoom2_ref.addBook("Short Story Collections");

    // Display reading room information
    readingRoom1.displayInfo();
    std::cout << std::endl;
    readingRoom2_ref.displayInfo();
    std::cout << std::endl;

    // ==================== Create Professional Books and Novels ====================
    std::cout << "5. Creating Book Objects..." << std::endl;
    std::cout << "---------------------------------" << std::endl;

    // Professional Books - Value definition
    ProfessionalBook proBook1("01", "666-0-123456-01", "C++ Primer", "Stanley Lippman", 2012, "Computer Science");
    ProfessionalBook proBook2("02", "666-0-123456-02", "Introduction to Algorithms", "Thomas Cormen", 2009,
                              "Computer Science");
    ProfessionalBook proBook3("03", "666-0-123456-03", "Principles of Economics", "N. Gregory Mankiw", 2020,
                              "Economics");

    // Professional Books - Reference definition
    ProfessionalBook proBook4("04", "666-0-123456-04", "Psychology and Life", "Richard Gerrig", 2018, "Psychology");
    ProfessionalBook &proBook4_ref = proBook4;
    ProfessionalBook proBook5("05", "666-0-123456-05", "Principles of Biochemistry", "David Nelson", 2017, "Biology");
    ProfessionalBook &proBook5_ref = proBook5;

    // Novels - Value definition
    Novel novel1("001", "666-0-654321-01", "The Glory of Tang Dynasty", "Gabriel Garcia Marquez", 2017, "History");
    Novel novel2("002", "666-0-654321-02", "1984", "George Orwell", 1949, "Dystopian");
    Novel novel3("003", "666-0-654321-03", "Pride and Prejudice", "Jane Austen", 1813, "Romance");

    // Novels - Reference definition
    Novel novel4("004", "666-0-654321-04", "The Three-Body Problem", "Liu Cixin", 2008, "Science Fiction");
    Novel &novel4_ref = novel4;
    Novel novel5("005", "666-0-654321-05", "Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997, "Fantasy");
    Novel &novel5_ref = novel5;

    // Set some books as borrowed
    proBook1.setBorrowed(true, student1.getId());
    novel5_ref.setBorrowed(true, teacher1.getId());
    proBook4_ref.setBorrowed(true, student3.getId());

    // Display book information
    std::cout << "Professional Books:" << std::endl;
    proBook1.displayInfo();
    std::cout << std::endl;
    proBook2.displayInfo();
    std::cout << std::endl;
    proBook3.displayInfo();
    std::cout << std::endl;
    proBook4_ref.displayInfo();
    std::cout << std::endl;
    proBook5_ref.displayInfo();
    std::cout << std::endl;

    std::cout << "Novels:" << std::endl;
    novel1.displayInfo();
    std::cout << std::endl;
    novel2.displayInfo();
    std::cout << std::endl;
    novel3.displayInfo();
    std::cout << std::endl;
    novel4_ref.displayInfo();
    std::cout << std::endl;
    novel5_ref.displayInfo();
    std::cout << std::endl;


    std::cout << "=== Program Completed Successfully ===" << std::endl;

    return 0;
}