/*
Титов Павел Сергеевич, 04-1
Лабораторная №4
Задание 4 Вариант 21
Дано целое число N в диапазоне 0–99, 
определяющее возраст (в годах). 
Вывести строку «Мне N лет», 
обеспечив правильное согласование числа со словом «год», например: N = 20 -«Мне 20 лет», N = 41 -«Мне 41 год», N = 12 -«Мне  12  лет».  Если  пользователь  введёт  данные  не  соответствующие условию задачи -выдать сообщение об ошибке. 
*/
#include <iostream>
#include <cmath>
#include <string>


using namespace std;
int main()
{
    int age;
    string ans;

    cin >> age;

    if ((age % 10 == 1) && (age != 11) && (age != 111)){ 
        ans = "год";
    }
    else if ((age % 10 > 1) && (age % 10 < 5) && (age != 12) && (age != 13) && (age != 14)){
        ans = "года";
    }
    else{ 
        ans = "лет";
    }
    cout << "Вам" << age << ans;
}