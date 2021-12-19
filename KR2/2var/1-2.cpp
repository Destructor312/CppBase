/*
Контрольная работа №2
Вариант №1
1. (2 балла) 
Дан массив действительных чисел a1, …, an. 
Получить массив чисел b1, …, bn, 
которые связаны с a1, …, an следующим образом:
*/
#include <iostream>
#include <cmath>

using namespace std;

double get_b_by_i(double a[], int i){
    return (a[i-1] - a[i]) / 3;
}

void filling_array(double a[], int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        a[i] = rand() % 10;
    }
}

void filling_array_by_other_array(double a[], double b[], int n){
    b[1] = a[1];
    b[n] = a[n];
    for (int i = 2; i < n-1; i++)
        b[i] = get_b_by_i(a, i);
}

int main() {
    int n;
    cin >> n;
    double a[n], b[n];
    filling_array(a, n);
    filling_array_by_other_array(a, b, n);
}
