#include "b.h"

B::B() : something()
{
    cout << "Створено B\n";
}

B::~B() {
    cout << "Знищено B \"" << name << "\" у  " << something << endl;
}

int B::SetSomething(double s) {
    something = s;  // Присвоюємо значення формату
    return 1;  // Повертаємо 1 — успішне виконання
}


int B::Describe() {
    A::Describe();
    cout << "B: " << something << endl;
    return 1;
}