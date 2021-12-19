/*
Лабораторная работа №4
Задание 9 Вариант 21
Составить программу, которая в зависимости от 
порядкового номера дня недели (1, 2, ..., 7) 
выводит на экран его название 
(понедельник, вторник, ..., воскресенье). 
*/
#include <iostream>

using namespace std;
int main() {
    string day;
    int day_num;
    cin >> day_num;
    switch (day_num)
    {
    case 1:
        day = "Понедельник";
        break;
    case 2:
        day = "Вторник";
        break;
    case 3:
        day = "Среда";
        break;
    case 4:
        day = "Четверг";
        break;
    case 5:
        day = "Пятница";
        break;
    case 6:
        day = "Суббота";
        break;
    case 7:
        day = "Воскресенье";
        break;

    default:
        day = "invalid?";
        break;
    }

    cout << day;
}