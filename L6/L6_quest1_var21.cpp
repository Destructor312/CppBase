/*
Титов Павел Сергеевич 04-1
Лабораторная работа №6
Задание 1 Вариант 21
Напечатать числа в виде следующей таблицы:
1. 
41  42  43  ... 50
51  52  53  ... 60
...
81  82  83
*/
#include <iostream>

using namespace std;
int main(){
    for (int i = 41; i <= 83; i++){
        cout << i << ((i % 10 == 0) ? "\n" : "\t"); 
    }
}