/*
Титов Павел Сергеевич 04-1
Лабораторная работа №9
Задание 4 Вариант 21
Найти сумму ряда с точностью Eps, общий член которого равен An = n! / 5^n
Точность считается достигнутой если, следующий член последовательности меньше заданного Eps
*/
#include <iostream>
#include <cmath>

double fact(double);
double get_a(double);
double get_num(double, double);

using namespace std;
int main(){
    double n, eps;
    cin >> n >> eps;
    cout << get_num(n, eps);
}

double fact(double n){
    if (n < 0) return 0;
    double s = 1.0;
    for (int i = 1; i <= n; i++){
        s *= i;
    }
    return s;
}
double get_a(double n){
    return (fact(n) / pow(5, n));
}

double get_num(double n, double eps){
    if (n < eps) return n;
    return get_num(get_a(n), eps);
}