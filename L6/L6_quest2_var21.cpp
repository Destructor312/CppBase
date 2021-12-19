/*
Лабораторная работа №6
Задание 2 Вариант 21
Вычислить значение выражения
P=(1 + sin(x^2))(2 + sin(x^3))(3 + sin(x^4)) ... (n + sin(x^(n-1)))
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int P, n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        P *= (1 + sin(pow(i, i+1)));
    }
    cout << P;
}