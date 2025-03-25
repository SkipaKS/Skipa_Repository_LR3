#include <iostream>
#include <string>

using namespace std;

void FirstSymbol(char& ch1)
{
    cout << "Введите первый символ: ";
    cin >> ch1;
}

void SecondSymbol(char& ch2)
{
    cout << "Введите второй символ: ";
    cin >> ch2;
}

void printASCIICodes(char ch1, char ch2)
{
    cout << "Коды ASCII символов:" << endl;
    cout << "Первый символ (ch1): " << static_cast<int>(ch1) << endl;
    cout << "Второй символ (ch2): " << static_cast<int>(ch2) << endl;
}

void ptintSumASCIICodes(char ch1, char ch2)
{
    int ascii_ch1 = static_cast<int>(ch1);
    int ascii_ch2 = static_cast<int>(ch2);
    int sum_ascii = ascii_ch1 + ascii_ch2;
    cout << "Сумма кодов ASCII символов ch1 и ch2: " << sum_ascii << endl;
}