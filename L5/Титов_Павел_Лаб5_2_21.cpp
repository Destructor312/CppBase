/*
Титов Павел Сергеевич 04-1
Лабораторная работа №5
Задание 2 Вариант 21
Конь за один ход может перейти с поля (g1,c1) на поле (g2,c2)
*/
#include <iostream>

using namespace std;
int main(){
    int g1, g2, c1, c2;
    cin >> g1 >> g2 >> c1 >> c2;
    int dx = abs(g1 - g2);
    int dy = abs(c1 - c2);
    cout << (dx == 1) and (dy == 2) or (dx == 2) and (dy == 1);
}