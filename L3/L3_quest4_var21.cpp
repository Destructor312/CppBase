/*
Лабораторная №3
Задание 4 Вариант 21 (8)
Постановка задачи
Вычислить, используя только операции умножения или деления.
Вычислить за 6 операции a^28. 
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
    int e = d * d * d * c; // a^28
    
    cout << "Answer: " << e << endl;
    return 0;
}
