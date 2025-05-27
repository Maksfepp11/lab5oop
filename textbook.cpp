#include "textbook.h"

Textbook::Textbook() : subject(""), grade(0) {
    cout << "Створено підручник\n";
}

Textbook::~Textbook() {
    cout << "Знищено підручник \"" << title << "\" для " << grade << " класу\n";
}

int Textbook::SetSubject(string s) {
    subject = s;
    return 1;
}

// Метод для встановлення значення класу (grade)
// Приймає ціле число g і зберігає його в поле grade
int Textbook::SetGrade(int g) {
    grade = g;
    return 1;  // Повертає 1 — ознака успішного виконання
}



int Textbook::Describe() {
    Book::Describe();
    cout << "Предмет: " << subject << endl;
    cout << "Клас: " << grade << endl;
    return 1;
}

