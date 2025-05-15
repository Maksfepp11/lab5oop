#include "specialbook.h"

SpecialBook::SpecialBook() {
    cout << "Створено спецкнигу\n";
}

SpecialBook::~SpecialBook() {
    cout << "Знищено спецкнигу: \"" << title << "\"\n";
}

int SpecialBook::Describe() {
     // Викликаємо метод Describe() базового класу
    Book::Describe();
    cout << "Жанр: " << genre << endl;
    cout << "Розмір файлу: " << fileSize << " МБ\n";
    cout << "Формат: " << format << endl;
    return 1;
}