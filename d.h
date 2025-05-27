#ifndef D_H
#define D_H

#include "b.h"
#include "c.h"

class D : public B, public C {
public:
    D();
    int Describe() override;
    int Describe(const string& extra);
    ~D();
};

#endif