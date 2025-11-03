//
// Created by DELL on 2025/11/2.
//

#ifndef CC___DATE_H
#define CC___DATE_H

#endif //CC___DATE_H
#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int year, month, day;
public:
    Date();
    Date(int y, int m, int d);
    virtual ~Date();
    std::string toString() const;
};

#endif // DATE_H