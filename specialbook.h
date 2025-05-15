#ifndef SPECIALBOOK_H
#define SPECIALBOOK_H

#include "ebook.h"
#include "fiction.h"
#include "textbook.h" 


//Оголощення класу SpecialBook - нащадка ебук і фікшн
class SpecialBook : public EBook, public Fiction, public Textbook {
public:
    SpecialBook();
    virtual int Describe() override; //для перевизначення в інших клас
    virtual ~SpecialBook();
};

#endif