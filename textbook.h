#ifndef TEXTBOOK_H          
#define TEXTBOOK_H          

#include "book.h"           

// Оголошення класу Textbook, який є нащадком (успадковує) класу Book
class Textbook : virtual public Book {
protected:         
    int grade;             

public:
    Textbook();             // Конструктор за замовчуванням
    int SetGrade(int g);       // Метод для встановлення значення поля grade
    virtual int Describe() override;   // Перевизначений метод Describe — виводить інформацію про підручник
    virtual ~Textbook();
};

#endif 
