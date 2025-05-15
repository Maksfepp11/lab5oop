#include "book.h"

Book::Book() : author(""), pages(0) {
    cout << "Створено книгу\n";
}

Book::~Book() {
    cout << "Знищено книгу: \"" << title << "\" автора " << author << " (" << year << ")\n";
}

// Метод SetAuthor для встановлення автора книги
int Book::SetAuthor(string a) {
    author = a; // Присвоєння значення параметра a атрибуту author
    return 1; // Повернення 1 для вказівки на успішне виконання методу
}

int Book::SetPages(int p) {
    pages = p;
    return 1;
}

int Book::Describe() {
    // Викликаємо метод Describe() базового класу Publication
    // Він виведе назву, видавництво і рік публікації
    Publication::Describe();
    cout << "Автор: " << author << endl;
    cout << "Кількість сторінок: " << pages << endl;
    return 1;
}