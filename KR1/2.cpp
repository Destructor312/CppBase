/*
Вариант 3 Задание 2
Дано натуральное число N. Вычислить
( cos1 cos1 + cos2 cos1 + cos2 + ... + cosN) / (sin1 sin1 + sin2 sin1 + sin2 + ... + sinN)
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int N;
    cin >> N;
    double cos_n = 0;
    double sin_n = 0;

    for (int i = 1; i <= N; i++){
        cos_n += cos(i) + cos(i) * cos(1);
        sin_n += sin(i) + sin(i) * sin(1);
    }
    cout << cos_n / sin_n;
}