#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int pages;

public:
    Book(); // Конструктор за замовчуванням, який ініціалізує значення
    int SetTitle(string t);  // Метод для встановлення назви книги
    int SetAuthor(string a); // Метод для встановлення атвора книги
    int SetPages(int p); // Метод для встановлення ст в книзі
    virtual int Describe(); // Віртуальний метод Describe, який буде перевизначений у похідних класах
    virtual ~Book(); //деструктор
};

#endif