/*
Титов Павел Сергеевич, 04-1
Лабораторная работа №4
Задание 8 Вариант 21
Даны действительные числа A,B,C,D. Если A<B<C<D, то каждое число заменить на 133 если A>B>C>D то числа заменить на противоположные значения; в противном случае оставить без изменения.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b, c, d;
    if (a < b and b < c and c < d) {
        a = 133;
        b = 133;
        c = 133;
        d = 133;
    } else if (a > b and b > c and c > d) {
        a = !a;
        b = !b;
        c = !c;
        d = !d;
    } else {
        double g = sqrt(a * b * c * d);
        a = g;
        b = g;
        c = g;
        d = g;
    }
}