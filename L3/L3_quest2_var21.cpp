/*
Лабораторная №3
Задание 2 Вариант 21 (15)
Постановка задачи:
Вычислить гипотенузу прямоугольного треугольника с катетами a, b. 
*/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b;

    cout << "Input (example: 2 4): ";
    cin >> a >> b;

    cout << "Answer: " << sqrt(pow(a, 2) + pow(b, 2));
    return 0;
}
