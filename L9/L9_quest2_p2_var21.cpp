/*
Лабораторная работа №9
Задание 2 Вариант 21
1. Разбейте задачу на подзадачи (например, подзадача 
    1 – заполнение массива, подзадача 
    2 – вывод элементов массива на экран, подзадача 
    3 – нахождение максимума среди элементов массива, подзадача 
    4 – нахождение суммы элементов массива)
2. Определите функции для каждой подзадачи
3. Вызовите функции в нужном порядке для решения задачи.
(8.2)
*/
#include <iostream>
#include <vector>

using namespace std;

void filling_the_array(int x[], int n) {
    srand(time(nullptr));
    for (int i = 0; i < n; i++){ 
        x[i] = (rand() % 10) % 2 == 0;
    }
}

bool search_ans(int x[], int n){
    int last_key = x[0];
    bool is_even = true;

    for (int i = 1; i < n; i++){
        if (last_key + x[i] == 1) last_key = x[i];
        else {is_even = false; break;}
    }
    return is_even;
}

void show_elements(int x[], int n){
    for (int i = 0; i < n; i++){ 
        cout << x[i] << " ";
    }
}

int main() {
    int n = 5; 
    int x[n];

    filling_the_array(x, n);
    show_elements(x, n);
    cout << (search_ans(x, n) ? "True" : "False") << endl;
}
