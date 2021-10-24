/*
Титов Павел Сергеевич, 04-1
Лабораторная №4
Задание 7 Вариант 21
Даны вещественные x1,x2,x3,y1,y2,y3. Принадлежит ли начало координат треугольнику с вершинами (x1,y1), (x2,y2), (x3,y3). 
*/
#include <iostream>
#include <cmath>

double S(double, double, double, double, double, double);

using namespace std;
int main() {
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

    if ((get_S(x1,x3,0, y1,y3,0) + get_S(x2,x3,0,y2,y3,0) + get_S(x1,x2,0,y1,y2,0)) > get_S(x1,x2,x3,y1,y2,y3)) cout << "Yes";
    else cout << "no";
}

double get_S(double x1, double x2, double x3, double y1, double y2, double y3){
    double a = pow(pow(x1-x2, 2) * pow(y1-y2, 2), 0.5);
    double b = pow(pow(x2-x3, 2) * pow(y2-y3, 2), 0.5);
    double c = pow(pow(x1-x3, 2) * pow(y1-y3, 2), 0.5);
    double p = (a + b + c) / 2;
    double s = pow(p*(p-a)*(p-b)*(p-c), 0.5);
    return s;
}