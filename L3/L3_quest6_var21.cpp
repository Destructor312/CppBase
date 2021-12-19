/*
Лабораторная №3
Задание 6 Вариант 21 (28)
Постановка задачи
Найти значение y = f(x, t). 
Определить область допустимых значений для x и t.
*/

#include <iostream>
#include <cmath>

bool odz(int, int);
float f(int, int);

using namespace std;
int main() {
    int x, t;

    cout << "Input x t (example: 2 4): ";
    cin >> x >> t;

    cout << "Answer: " << f(x, t);

    return 0;
}

bool odz(int x, int t) {
    bool one = (pow(x, 2) + 2*x*t + pow(t, 2)) >= 0;
    bool two = (1 + pow(sin(x), 2) * pow(cos(x), 2)) != 0;
    bool three = pow(1 - pow((1 + pow(sin(x), 2) * pow(cos(x), 2)), 1/2), 1/2) != 0;
    bool tho = (1 + pow(1 - pow((1 + pow(sin(x), 2) * pow(cos(x), 2)), 1/2), 1/2)) != 0;
    
    return one && two && three;
}

float f(int x, int t) {
    if (!odz(x, t)) return 0;
    return (1 + pow((pow(x, 2) + 2*x*t + pow(t, 2)), 1/2)) / (1 + pow(1 - pow((1 + pow(sin(x), 2) * pow(cos(x), 2)), 1/2), 1/2));
}