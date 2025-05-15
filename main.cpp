#define NOMINMAX  
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "specialbook.h"

int main() {
    SetConsoleOutputCP(65001);

    SpecialBook sb;
    sb.SetTitle("Алгоритми");
    sb.SetPublisher("Навчальна книга");
    sb.SetYear(2024);
    sb.SetAuthor("Іван Іваненко");
    sb.SetPages(420);
    sb.SetGenre("Навчальна література");
    sb.SetFileSize(15.5);
    sb.SetFormat("PDF");

    sb.Describe();
    //викликає дискрайб з спеціалбук, а він бук  а той паблікатіон
    
    return 0;
}
