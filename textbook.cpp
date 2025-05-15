#include "textbook.h" 

// Конструктор класу Textbook (без параметрів)
// Ініціалізує поле subject як порожній рядок, а grade — як 0
Textbook::Textbook() : grade(9) {
    cout << "Створено підручник\n";
}

Textbook::~Textbook() {
    cout << "Знищено підручник\"" << title << "\" , " << grade << endl;
}


// Метод для встановлення значення класу (grade)
// Приймає ціле число g і зберігає його в поле grade
int Textbook::SetGrade(int g) {
    grade = g;
    return 1;  // Повертає 1 — ознака успішного виконання
}

// Метод для виведення інформації про підручник
// Спочатку викликає метод Describe() базового класу Book
// Потім додає виведення предмета та класу
int Textbook::Describe() {
    Book::Describe();  // Викликає Describe з класу Book (виведе автора, сторінки тощо)
    cout << "\nКлас: " << grade << endl;
    return 1;  // Повертає 1 — ознака успішного виконання
}

