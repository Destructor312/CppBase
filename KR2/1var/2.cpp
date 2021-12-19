/*
Контрольная работа №2
Задание 1 Вариант №1
(2 балла) 
Дан массив целых чисел a1, …, an среди которых могут быть повторяющиеся члены. 
Найти число различных членов последовательности. 
Для нахождения числа различных членов использовать функцию. 
Вывести на экран различные элементы в порядке неубывания.
*/
#include <iostream>
#include <set>

using namespace std;

void filling_array(set<int> &a, int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        a.insert(rand() % 10);
    }
}

void printing_array(set<int> &a){
    for (auto i : a) {
        cout << i << ", ";
    }
}

int main() {
    int n = 10; 
    set<int> a;
    filling_array(a, n);
    printing_array(a);
}