/*
Контрольная работа №1
Вариант 3 Задание 1
Даны действительные числа A,B,C,D. Если A<B<C<D, то каждое число заменить полусуммой максимального и минимального из оставшихся; если A>B>C>D то числа заменить максимальным модулем из оставшихся; в противном случае заменить все числа квадратом большего из них.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int max_n = 0;

    if ((A < B) and (B < C) and (C < D)){
        A = (max(max(B, C), D) + min(min(B, C), D)) / 2;
        B = (max(max(A, C), D) + min(min(A, C), D)) / 2;
        C = (max(max(B, A), D) + min(min(B, A), D)) / 2;
        D = (max(max(B, C), A) + min(min(B, A), D)) / 2;
    } else if ((A > B) and (B > C) and (C > D)){
        A = max(max(abs(B), abs(C)), abs(D));
        B = max(max(abs(A), abs(C)), abs(D));
        C = max(max(abs(B), abs(A)), abs(D));
        D = max(max(abs(B), abs(C)), abs(A));
    } else {
        max_n = pow(max(max(max(A,B),C),D), 2);
        A = max_n;
        B = max_n;
        C = max_n;
        D = max_n;
    }
}