#include "book.h"

Book::Book() : author(""), pages(0) {
    cout << "Створено книгу\n";
}

Book::~Book() {
    cout << "Знищено книгу\n";
}

int Book::SetAuthor(string a) {
    author = a;
    return 1;
}

int Book::SetPages(int p) {
    pages = p;
    return 1;
}

int Book::Describe() {
    Publication::Describe();
    cout << "Автор: " << author << endl;
    cout << "Кількість сторінок: " << pages << endl;
    return 1;
}