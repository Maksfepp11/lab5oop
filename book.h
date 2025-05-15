#ifndef BOOK_H
#define BOOK_H

#include "publication.h"

// Клас Book, який успадковує від класу Publication
class Book : virtual public Publication {
protected:
    string author;
    int pages;

public:
    Book();  // Конструктор класу 
    int SetAuthor(string a);
    int SetPages(int p);
    virtual int Describe() override; //для перевизначення в інших клас
    virtual ~Book(); //деструктор 
};

#endif