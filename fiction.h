#ifndef FICTION_H
#define FICTION_H

#include "book.h"

class Fiction : virtual public Book {
protected:
    string genre;

public:
    Fiction();
    int SetGenre(string g);
    virtual int Describe() override;
    virtual ~Fiction();
};

#endif
