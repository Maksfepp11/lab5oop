#include "specialbook.h"

SpecialBook::SpecialBook() {
    cout << "Створено спецкнигу\n";
}

SpecialBook::~SpecialBook() {
    cout << "Знищено спецкнигу \"" << title << "\"\n";
}

int SpecialBook::Describe() {
    // Використовуємо Describe() з Book тільки один раз
    Book::Describe();
    cout << "Предмет: " << subject << endl;
    cout << "Клас: " << grade << endl;
    cout << "Жанр: " << genre << endl;
    cout << "Формат: " << format << endl;
    cout << "Розмір файлу: " << fileSize << " МБ" << endl;
    return 1;
}

int SpecialBook::Describe(const string& extra) {
    Describe();         // Виклик основного Describe()
    cout << extra << endl;  // Додатковий вивід
    return 1;
}
