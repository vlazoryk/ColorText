// ForLab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
//#include <clocale>
#include <Windows.h>
using namespace std;

enum  ConsoleColor //: unsigned int
{                          //0000 IRGB  
    Black =         0x00,  //0000 0000
    Blue =          0x01,  //0000 0001
    Green =         0x02,  //0000 0010
    Cyan =          0x03,  //0000 0011
    Red =           0x04,  //0000 0100
    Magenta =       0x05,  //0000 0101
    Brown =         0x06,  //0000 0110
    LightGray =     0x07,  //0000 0111 
    DarkGray =      0x08,  //0000 1000
    LightBlue =     0x09,  //0000 1001
    LightGreen =    0x0a,  //0000 1010
    LightCyan =     0x0b,  //0000 1011
    LightRed =      0x0c,  //0000 1100
    LightMagenta =  0x0d,  //0000 1101
    Yellow =        0x0e,  //0000 1110
    White =         0x0f   //0000 1111
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Console, (WORD)((background << 4) | text));
}










int main()
{
  //  setlocale(LC_CTYPE, "ukr"); // виклик функції локалізації 
   SetConsoleCP(1251);// встановлення кодовой сторінки win-cp 1251 в піток виведення 
   SetConsoleOutputCP(1251); // встановлення кодовой сторінки win-cp 1251 в піток введення   

   SetColor(LightMagenta, Blue);
    cout <<"Кирилиця в консолi\n";
    SetColor(LightGreen, Blue);
    cout <<"Введiть слово \n";

    char string[20];
    SetColor( Blue, LightGreen);
    cin >> string; // вводим рядок , використовуючи Кириллицю
    SetColor(LightGreen, Blue);
    cout << "\n вивiд: " << string << endl; // виведення рядка
    cout << hex;
    for (int colb = 0; colb < 16; colb++)
    for (int colf = 0; colf < 16; colf++)
    {
        SetColor((ConsoleColor)colf, (ConsoleColor)colb);
        cout << " Text color " << colf << colb << "  " ;
        if ((colf+1) % 4 == 0) cout << endl;
    }
    SetColor(White, Black);
   
    cout << dec;
    std::cout << "Hello World!\n";
} 

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
