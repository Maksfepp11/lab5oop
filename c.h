#ifndef C_H
#define C_H

#include "A.h"


class C :  public virtual A {
protected:
    string what;

public:
    C();
    int SetWhat(string w);
    int Describe() override;
    ~C();
};

#endif