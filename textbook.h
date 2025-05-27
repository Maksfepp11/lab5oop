#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "book.h"

class Textbook :  public virtual  Book {
protected:
    string subject;
    int grade;

public:
    Textbook();
    int SetSubject(string s);
    int SetGrade(int g);
    int Describe() override;
    ~Textbook();
};

#endif