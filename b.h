#ifndef B_H
#define B_H

#include "A.h"

class B : public virtual  A {
protected:
    string something;

public:
    B();
    int SetSomething(double s);
    int Describe() override;
    ~B();
};

#endif