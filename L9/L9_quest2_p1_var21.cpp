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
(8.1)
*/
#include <iostream>
#include <vector>

using namespace std;

long double fact(int N)
{
    if (N < 0) return 0;

    long double factorial = 1.0;
    for(int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    return factorial;
}

void filling_the_array(vector<int> &x, int n) {
    srand(time(nullptr));
    for (int i = 0; i < n; i++){ 
        x[i] = rand() % 10;
    }
}

double search_ans(vector<int> &x, int n){
    double s = 0;
    for (int i = 1; i < n; i++){
        s += x[i-1] * fact(i);
    }
    return s;
}

void show_elements(vector<int> &x, int n){
    for (int i = 0; i < n; i++){ 
        cout << x[i] << " ";
    }
}

int main() {
    int n = 5; 
    vector<int> x(n);

    filling_the_array(x, n);
    show_elements(x, n);
    cout << search_ans(x, n) << endl;
}
