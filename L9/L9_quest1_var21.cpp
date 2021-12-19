/*
Лабораторная работа №9
Задание 1 Вариант 21
Задано множество точек на плоскости.
Найти сумму длин отрезков между ними.
*/
#include <iostream>
#include <cmath>

double dlina(double, double, double, double);

using namespace std;
int main() {
    int n = 1;
    double x1, y1, x2, y2, s = 0;
    for (int i = 0; i < n; i++){
        cout << "x1 y1 x2 y2";
        cin >> x1 >> y1 >> x2 >> y2;
        s += dlina(x1, y1, x2, y2);
        cout << "Длина: " << dlina(x1, y1, x2, y2) << endl;
    }
    cout << "Общая сумма: " << s << endl;
}

double dlina(double x1, double y1, double x2, double y2){
    return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}
