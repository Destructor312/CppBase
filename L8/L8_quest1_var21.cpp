/*
Лабораторная работа №8
Задание 1 Вариант 21
n= …
int x [n];
Вычислить для вектора x: 
6. x[0]*1! + x[1]*2! + ... + x[n-1]*n! 
*/
#include <iostream>
#include <vector>

long double fact(int);

using namespace std;
int main() {
    const int n = 5; 
    vector<int> x(n);
    
    for (int i = 0; i < n; i++){ 
        x[i] = rand() % 10;
    }

    double s = 0;
    for (int i = 1; i < n; i++){
        s += x[i-1]*fact(i);
    }
    cout << s;
}

long double fact(int N)
{
    if (N < 0) return 0;

    long double factorial = 1.0;
    for(int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    return factorial;
}