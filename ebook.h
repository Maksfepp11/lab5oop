#ifndef EBOOK_H
#define EBOOK_H

#include "book.h"

// Оголошення класу EBook — нащадка класу Book
class EBook : virtual public Book {
protected:
    double fileSize;
    string format;

public:
    EBook();
    int SetFileSize(double s);
    int SetFormat(string f);
    virtual int Describe() override; //для перевизначення в інших клас
    virtual ~EBook();
};

#endif