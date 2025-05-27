#include "fiction.h"

Fiction::Fiction() : genre("") {
    cout << "Створено художню книгу\n";
}

Fiction::~Fiction() {
    cout << "Знищено художню книгу \"" << title << "\" у жанрі " << genre << endl;
}

int Fiction::SetGenre(string g) {
    genre = g; // Присвоюємо значення жанру
    return 1; // Повертаємо 1 — успішне виконання
}

// Метод для опису публікації
int Fiction::Describe() {
    Book::Describe();
    cout << "Жанр: " << genre << endl;
    return 1;
}