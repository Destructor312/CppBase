/*
2. (2 балла) 
У прилавка в магазине выстроилась очередь из n покупателей. 
Время обслуживания продавцом i–го покупателя равно 
ti (i = 1, …, n). 
Пусть даны натуральное n и действительные t1, …, tn. 
Получить c1, …, cn, где ci — время пребывания 
i–го покупателя в очереди (i = 1, …, n). 
Указать номер покупателя, для обслуживания которого 
продавцу потребовалось самое большое время. 
Для получения массива С и номера покупателя использовать 
функции.
*/
#include <iostream>

using namespace std;

void filling_time_array(double t[], int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        t[i] = rand() % 10 + 1;
    }
}
void filling_time_c_array(double t[], double c[], int n){
    for (int i = 0; i < n; i++){
        double c_time_cnt = 0;
        for (int j = 0; j < i; j++)
            c_time_cnt += t[j];
        c[i] = c_time_cnt;
    }
}
int get_max_el_index(double a[], int n){
    double a_max = 0;
    int i_max = 0;
    for (int i=0; i<n; i++){
        if (a[i]>a_max){
            a_max = a[i];
            i_max = i;
        }
    }
    return i_max;
}
int main() {
    int n = 10; 
    double t[n];
    double c[n];
    filling_time_array(t, n);
    filling_time_c_array(t, c, n);
    cout << "номер покупателя, для обслуживания которого продавцу потребовалось самое большое время - ";
    cout << get_max_el_index(t, n) << endl;
}