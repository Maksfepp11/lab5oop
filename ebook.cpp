#include "ebook.h"

EBook::EBook() : fileSize(0.0), format("") {
    cout << "Створено електронну книгу\n";
}

EBook::~EBook() {
    cout << "Знищено електронну книгу \"" << title << "\" у форматі " << format << endl;
}

int EBook::SetFileSize(double s) {
    fileSize = s;  // Присвоюємо значення формату
    return 1;  // Повертаємо 1 — успішне виконання
}

int EBook::SetFormat(string f) {
    format = f;
    return 1;
}

int EBook::Describe() {
    Book::Describe();
    cout << "Формат: " << format << endl;
    cout << "Розмір файлу: " << fileSize << " МБ" << endl;
    return 1;
}