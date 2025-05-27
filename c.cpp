#include "c.h"

C::C() : what() {
    cout << "Створено C\n";
}

C::~C() {
    cout << "Знищено C \"" << name << "\" у what " << what << endl;
}

int C::SetWhat(string w) {
    what = w; // Присвоюємо значення жанру
    return 1; // Повертаємо 1 — успішне виконання
}

// Метод для опису публікації
int C::Describe() {
    A::Describe();
    cout << "What: " << what << endl;
    return 1;
}