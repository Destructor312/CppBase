/*
4. (3 балла) Дана матрица действительных чисел A размером n×m. 
Найти минимум из сумм элементов каждого столбца. 
Для получения минимума и суммы соответствующего столбца использовать функции.
*/
#include <iostream>
#include <vector>

using namespace std;

double sum_column(vector<vector <double>> &a, int n, int col){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][col];
    }
    return sum;
}

int main() {
    int n = 6, m = 6;
    vector<vector <double>> a(n, vector<double>(m));

    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            a[i][j] = rand() % 10;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    double min_ = 100;
    for (int i = 0; i < 6; i++){
        double sum_col = sum_column(a, n, i);
        if (sum_col < min_)
            min_ = sum_col;
    }
    cout << min_ << endl;
}