#include "A.h"

A::A() {
    cout << "Створено A\n";
}

A::~A() {
    cout << "Знищено A: \"" << name << "\" a" << letter << endl;
}

int A::SetName(string n) {
 name = n; // Присвоєння значення параметра t атрибуту title
 return 1; // Повертається 1, щоб вказати успішне виконання
}

int A::SetLetter(string l) {
    letter = l; 
    return 1; 
}

// Метод для опису публікації
int A::Describe() {
    cout << "A: " << name << endl;
    cout << "A: " << letter << endl;
    return 1;
}