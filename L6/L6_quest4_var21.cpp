/*
Лабораторная работа №6
Задание 4 Вариант 21
Дана непустая последовательность не нулевых целых чисел, за которой следует 0.
Определить три наибольших числа среди них.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int j = 120;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    while (j != 0){
        cin >> j;
        if (n1 < j) {n3 = n2; n2 = n1; n1 = j;}
        else if (j > n2 && j > n3 && j < n1) {n3 = n2; n2 = j;}
        else if (j < n2 && j < n1 && j > n3) {n3 = j;}
    }
    cout << "max: " << n1 << endl;
    cout << "pre-max: " << n2 << endl;
    cout << "pre-pre-max: " << n3 << endl;
}