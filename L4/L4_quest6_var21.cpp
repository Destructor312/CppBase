/*
Лабораторная №4
Задание 6 Вариант 21
Даны вещественные x,y,z. Наити max(x*x,y*y,z*z). 
*/

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double x, y, z;
    cin >> x >> y >> z;
    cout << max(x*x, y*y, z*z);
}