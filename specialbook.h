#ifndef SPECIALBOOK_H
#define SPECIALBOOK_H

#include "textbook.h"
#include "ebook.h"
#include "fiction.h"

class SpecialBook : public Textbook, public EBook, public Fiction {
public:
    SpecialBook();
    int Describe() override;
    int Describe(const string& extra);
    ~SpecialBook();
};

#endif