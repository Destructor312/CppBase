/*
Титов Павел Сергеевич, 04-1
Лабораторная №4
Задание 4 Вариант 21
Дано целое число N в диапазоне 0–99, определяющее возраст (в годах). Вывести строку «Мне N лет», обеспечив правильное согласование числа со словом «год», например: N = 20 -«Мне 20 лет», N = 41 -«Мне 41 год», N = 12 -«Мне  12  лет».  Если  пользователь  введёт  данные  не  соответствующие условию задачи -выдать сообщение об ошибке. 
*/
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    int n;
    string ans;

    cin >> n;

    switch (n % 10)
    {
    case 1:
        ans = " год"; break;
    case 2:
        ans = " года"; break;
    case 3:
        ans = " года"; break;
    case 4:
        ans = " года"; break;
    case 0:
        ans = " лет"; break;
    case 5:
        ans = " лет"; break;
    case 6:
        ans = " лет"; break;
    case 7:
        ans = " лет"; break;
    case 8:
        ans = " лет"; break;
    case 9:
        ans = " лет"; break;
    default:
        cout << "bad arg"; break;
    }
    cout << n << ans;
    return 0;
}