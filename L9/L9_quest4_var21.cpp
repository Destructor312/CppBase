/*
Лабораторная работа №9
Задание 4 Вариант 21
Найти сумму ряда с точностью Eps, общий член которого равен An = n! / 5^n
Точность считается достигнутой если, следующий член последовательности меньше заданного Eps
*/
#include <iostream>
#include <cmath>

using namespace std;

double fact(double N){
    if(N < 0) return 0;
    if (N == 0) return 1;
    else return N * fact(N - 1);
}

double rec(double &summ, int n, double pre_a, double eps){
    double a = (fact(n) / pow(5, n));
    summ += a;
    if (abs(pre_a - a) >= eps) return rec(summ, n++, a, eps);
    else return summ;
}

int main(){
    int n = 1;
    double eps, s = 0;

    cout << "Введите точность Eps: ";
    cin >> eps;
    rec(s, n, 0, eps);
    cout << "Сумма равна " << s;
}