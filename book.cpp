#include "book.h"

Book::Book() {
    cout << "Створено книгу\n";
}

Book::~Book() {
    cout << "Знищено книгу: \"" << title << "\" автора " << author << endl;
}

int Book::SetTitle(string t) {
 title = t; // Присвоєння значення параметра t атрибуту title
 return 1; // Повертається 1, щоб вказати успішне виконання
}

int Book::SetAuthor(string a) {
    author = a; 
    return 1; 
}

int Book::SetPages(int p) {
    pages = p;
    return 1;
}
// Метод для опису публікації
int Book::Describe() {
    cout << "Назва: " << title << endl;
    cout << "Автор: " << author << endl;
    cout << "Кількість сторінок: " << pages << endl;
    return 1;
}