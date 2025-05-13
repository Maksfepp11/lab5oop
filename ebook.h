#ifndef EBOOK_H
#define EBOOK_H

#include "book.h"

class EBook : virtual public Book {
protected:
    double fileSize;
    string format;

public:
    EBook();
    int SetFileSize(double s);
    int SetFormat(string f);
    virtual int Describe() override;
    virtual ~EBook();
};

#endif