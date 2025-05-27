#ifndef A_H
#define A_H

#include <iostream>
#include <string>
using namespace std;

class A {
protected:
    string name;
    string letter;

public:
    A(); // Конструктор за замовчуванням, який ініціалізує значення
    int SetName(string n);  // Метод для встановлення назви книги
    int SetLetter(string l); // Метод для встановлення атвора книги
    virtual int Describe(); // Віртуальний метод Describe, який буде перевизначений у похідних класах
    virtual ~A(); //деструктор
};

#endif