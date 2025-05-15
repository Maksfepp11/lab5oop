#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream> // Підключення бібліотеки для вводу/виводу 
#include <string> // Підключення бібліотеки для роботи з рядками 
using namespace std; // Оголошення класу Publication

class Publication {
protected:
    string title;
    string publisher;
    int year;

public:
    Publication(); // Конструктор за замовчуванням, який ініціалізує значення
    int SetTitle(string t); // Метод для встановлення назви публікації
    int SetPublisher(string p); // Метод для встановлення видавця публікації
    int SetYear(int y); // Метод для встановлення року видання публікації
    virtual int Describe(); // Віртуальний метод Describe, який буде перевизначений у похідних класах
    virtual ~Publication(); //деструктор
};

#endif