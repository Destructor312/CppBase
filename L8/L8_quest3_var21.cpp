/*
Лабораторная работа №8
Задание 3 Вариант 21
2. Номер первого нулевого элемента, стоящего после 
отрицательного элемента, или -1, если такого элемента нет.
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n = 10; 
    int x[n];

    srand(time(nullptr));
    for (int i = 0; i < n; i++){ 
        x[i] = (rand() % 20 - 10);
        cout << x[i] << " ";
    }

    int last_key = x[0];
    int first_done = -1;

    for (int i = 1; i < n; i++){
        if (last_key < 0 && x[i] == 0) { 
            first_done = i; break;
        }
        last_key = x[i]; 
    }
    cout << ": " << first_done;
}