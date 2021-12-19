/*
Лабораторная работа №8
Задание 2 Вариант 21
6. Написать программу, которая печатает True, 
если элементы массива x чередуются по четности 
(четные, нечетные) 
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n = 5; 
    int x[n];

    srand(time(nullptr));
    for (int i = 0; i < n; i++){ 
        x[i] = (rand() % 10) % 2 == 0;
        cout << x[i] << " ";
    }
    int last_key = x[0];
    bool is_even = true;

    for (int i = 1; i < n; i++){
        if (last_key + x[i] == 1) last_key = x[i];
        else {is_even = false; break;}
    }
    cout << (is_even ? "True" : "False");
}