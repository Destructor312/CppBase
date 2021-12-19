/*
Контрольная работа №2
Задание 1 Вариант №1
(2 балла) Дан массив действительных чисел a1, …, an. 
Получить массив чисел b1, …, bn, которые связаны с a1, …, an следующим образом:
*/
#include <iostream>
#include <cmath>

using namespace std;

double get_b_by_i(double a[], int i){
    double s = 0;
    for (int j = 0; j < i; j++)
        s += a[j];
    return a[i] / (1 + pow(s, 2));
}

void filling_array(double a[], int n){
    double fill;
    for (int i = 0; i < n; i++){
        cin >> fill;
        a[i] = fill;
    }
}

void filling_array_by_other_array(double a[], double b[], int n){
    for (int i = 0; i < n; i++)
        b[i] = get_b_by_i(a, i);
}

int main() {
    int n;
    cin >> n;
    double a[n], b[n];
    filling_array(a, n);
    filling_array_by_other_array(a, b, n);
}
