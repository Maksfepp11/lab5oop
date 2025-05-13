#include "fiction.h"

Fiction::Fiction() : genre("") {
    cout << "Створено художню книгу\n";
}

Fiction::~Fiction() {
    cout << "Знищено художню книгу\n";
}

int Fiction::SetGenre(string g) {
    genre = g;
    return 1;
}

int Fiction::Describe() {
    Book::Describe();
    cout << "Жанр: " << genre << endl;
    return 1;
}