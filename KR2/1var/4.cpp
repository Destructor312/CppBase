/*
Контрольная работа №2
Задание 4, Вариант 1
4. (3 балла) 
Даны две квадратные матрицы A и B размером n×n. 
Вычислить сумму элементов, лежащих на главной диагонали матрицы { cij }, образованной следующим образом:
*/
#include <iostream>
#include <vector>

using namespace std;

void filling_array(vector<vector<int>> &matrix, int n) {
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            matrix[i][j] = rand() % 10;
    }
}

void filling_c_matrix(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &c, int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}

int diagonal_search(vector<vector<int>> &c, int n){
    int s = 0;
    for (int i = 0; i < n; i++)
        s += c[i][i];
    return s;
}

int main(){
    int n = 5;
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<vector<int>> c;
    filling_array(a, n);
    filling_array(b, n);
    filling_c_matrix(a, b, c, n);
    cout << diagonal_search(c, n) << endl;
}