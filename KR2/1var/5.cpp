/*
Контрольная работа №2
Задание 5, Вариант 2
5. (3 балла) Дана матрица действительных чисел A размером n×m
Для каждого столбца матрицы А все отрицательные члены, следующие за членом с наибольшим значением, заменить на 0.5
Для поиска наибольшего значения и преобразования матрицы А использовать функции
*/
#include <iostream>
#include <vector>

using namespace std;

void filling_array(vector<vector <double>> &a, int n, int m) {
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            a[i][j] = rand() % 10 - 5;
    }
}

void printing_matrix(vector<vector <double>> &a, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

double get_max_num_by_col(vector<vector <double>> &a, int n, int col){
    double max_el = -10;
    for (int i = 0; i < n; i++){
        if (max_el < a[i][col])
            max_el = a[i][col];
    }
    return max_el;
}


void change_matrix(vector<vector <double>> &a, int n, int m){
    bool max_passed = false; 
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            max_passed = get_max_num_by_col(a, n, i) == a[i][j];
            if (max_passed && a[i][j] < 0)
                a[j][i] = 0.5;
        }
    }
}

int main() {
    int n = 6, m = 6;
    vector<vector <double>> a(n, vector<double>(m));
    filling_array(a, n, m);
    printing_matrix(a, n, m);
    cout << endl;
    for (int i = 0; i < 6; i++){
        cout << get_max_num_by_col(a, n, i) << " ";
    }
    cout << endl;
    cout << endl;

    change_matrix(a, n, m);
    printing_matrix(a, n, m);
}