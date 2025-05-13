#ifndef SPECIALBOOK_H
#define SPECIALBOOK_H

#include "ebook.h"
#include "fiction.h"

class SpecialBook : public EBook, public Fiction {
public:
    SpecialBook();
    virtual int Describe() override;
    virtual ~SpecialBook();
};

#endif