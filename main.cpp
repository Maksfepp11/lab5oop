#define NOMINMAX  
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>
#include "specialbook.h"
#include "d.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    {
        // 🔷 Спочатку SpecialBook
        SpecialBook sb;
        sb.SetTitle("Алгоритми");
        sb.SetAuthor("Іван Іваненко");
        sb.SetPages(320);
        sb.SetSubject("Інформатика");
        sb.SetGrade(10);
        sb.SetGenre("Наукова фантастика");
        sb.SetFormat("PDF");
        sb.SetFileSize(12.5);
        sb.Describe();
    } // <- Тут викликається деструктор SpecialBook і всіх базових класів

    cout << "\n======= Далі створення D =======\n";

    {
        // 🔷 Потім D
        D d;
        d.SetName("Клас А");
        d.SetLetter("шось класне");
        d.SetSomething(250);
        d.SetWhat("");
        d.Describe();
    } // <- Тут викликається деструктор D і всіх базових класів

    return 0;
}

