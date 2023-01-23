// CPP-07, Part 2, Less 2, Hw 2.cpp

/*
  23.01.2023
  Тема 2, Занятие 2
  Работа 2, Счета
  CPP-07
  @j1n4ed
*/

#include <iostream>
#include <Windows.h>

struct account 
{
    int number;
    std::string fname;
    int balance;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    account pers;

    std::cout << "Введите номер счёта: ";

    std::cin >> pers.number;

    std::cout << "Введите имя владельца : ";

    std::cin >> pers.fname;

    std::cout << "Введите баланс : ";

    std::cin >> pers.balance;

    std::cout << "Введите новый баланс : ";

    int newBalance = 0;

    std::cin >> newBalance;

    pers.balance = newBalance;

    std::cout << "Ваш счёт : " << pers.fname << ", " << pers.number << ", " << pers.balance << std::endl;

    system("pause");
    return 0;
}