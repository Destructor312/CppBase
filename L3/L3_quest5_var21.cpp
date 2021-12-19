/*
Лабораторная №3
Задание 5 Вариант 21 (8)
Постановка задачи
Вычислить, используя только операции умножения или деления.
Вычислить за 6 операции a^18. 
*/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a;
    cout << "Input (example: 2): ";
    cin >> a;
    
    int b = a * a; // a^2
    int c = b * b; // a^4
    int d = c * c; // a^8
    int e = d * c * c * b; // a^18
    
    cout << "Answer: " << e << endl;
    return 0;
}
