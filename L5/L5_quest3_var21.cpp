/*
Лабораторная работа №5
Задание 3 Вариант 21
4 «Первые 3 цифры из дробной части положительного вещественного числа имеют одинаковую четность».
*/
#include <iostream>

using namespace std;
int main(){
    double num;
    cout << "num: ";
    cin >> num;
    num += 0.000000000000001;
    int three = int(num * 1000) % 10;
    int two = int(num * 1000) / 10 % 10;
    int one = int(num * 1000) / 10 / 10 % 10;
    cout << one << " " << two << " " << three << "\n";
    cout << ((one % 2 == two % 2 && one % 2 == three % 2) ? "da" : "net") << endl;
}