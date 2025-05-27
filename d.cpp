#include "d.h"

D::D() {
    cout << "Створено d\n";
}

D::~D() {
    cout << "Знищено D \"" << name << "\"\n";
}

int D::Describe() {
    // Використовуємо Describe() з A тільки один раз
    A::Describe();
    cout << "What: " << what << endl;
    cout << "Someting: " << something << endl;
    return 1;
}

int D::Describe(const string& extra) {
    Describe();         // Виклик основного Describe()
    cout << extra << endl;  // Додатковий вивід
    return 1;
}