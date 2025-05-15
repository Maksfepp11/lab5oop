#include "fiction.h"

Fiction::Fiction() : genre("") {
    cout << "Створено художню книгу\n";
}

Fiction::~Fiction() {
    cout << "Знищено художню книгу: \"" << title << "\" , " << genre << endl;
}

// Метод для встановлення значення жанру книги
int Fiction::SetGenre(string g) {
    genre = g; // Присвоюємо значення жанру
    return 1; // Повертаємо 1 — успішне виконання
}

int Fiction::Describe() {
     // Викликаємо метод Describe() базового класу
    Book::Describe();
    cout << "Жанр: " << genre << endl;
    return 1;
}