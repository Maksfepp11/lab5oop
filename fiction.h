#ifndef FICTION_H
#define FICTION_H

#include "book.h"

// Оголошення класу Fiction — нащадка класу Book
class Fiction : virtual public Book {
protected:
    string genre;

public:
    Fiction();
    int SetGenre(string g);
    virtual int Describe() override; //для перевизначення в інших клас
    virtual ~Fiction();
};

#endif
