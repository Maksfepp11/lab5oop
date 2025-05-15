#include "publication.h"

Publication::Publication() : title(""), publisher(""), year(0) {
    cout << "Створено публікацію\n";
}

Publication::~Publication() {
    cout << "Знищено публікацію: " << title << " (" << year << ")\n";
}

// Метод для встановлення назви публікації
int Publication::SetTitle(string t) {
    title = t; // Присвоєння значення параметра t атрибуту title
    return 1; // Повертається 1, щоб вказати успішне виконання
}

int Publication::SetPublisher(string p) {
    publisher = p; 
    return 1;  
}

int Publication::SetYear(int y) {
    year = y;
    return 1;  
}

// Метод для опису публікації
int Publication::Describe() {
    cout << "\nНазва: " << title;
    cout << "\nВидавництво: " << publisher;
    cout << "\nРік видання: " << year << endl;
    return 1;  
}