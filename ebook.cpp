#include "ebook.h"

EBook::EBook() : fileSize(0.0), format("") {
    cout << "Створено електронну книгу\n";
}

EBook::~EBook() {
    cout << "Знищено електронну книгу: \"" << title << "\" , " << format << " (" << fileSize << " МБ)\n";
}

// Метод для встановлення формату електронної книги
int EBook::SetFileSize(double s) {
    fileSize = s;  // Присвоюємо значення формату
    return 1;  // Повертаємо 1 — успішне виконання
}

int EBook::SetFormat(string f) {
    format = f;
    return 1;
}

int EBook::Describe() {
     // Викликаємо метод Describe() базового класу 
    Book::Describe();
    cout << "Розмір файлу: " << fileSize << " МБ\n";
    cout << "Формат: " << format << endl;
    return 1;
}