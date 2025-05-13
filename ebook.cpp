#include "ebook.h"

EBook::EBook() : fileSize(0.0), format("") {
    cout << "Створено електронну книгу\n";
}

EBook::~EBook() {
    cout << "Знищено електронну книгу\n";
}

int EBook::SetFileSize(double s) {
    fileSize = s;
    return 1;
}

int EBook::SetFormat(string f) {
    format = f;
    return 1;
}

int EBook::Describe() {
    Book::Describe();
    cout << "Розмір файлу: " << fileSize << " МБ\n";
    cout << "Формат: " << format << endl;
    return 1;
}