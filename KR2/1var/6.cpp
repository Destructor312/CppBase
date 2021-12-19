/*
Задание 6, Вариант 1
6. (3 балла) 
Дан одномерный массив действительных чисел a1, ..., a64. 
Получить квадратную матрицу порядка 8, элементами которой являются числа a1, ..., a64, 
расположенные по схеме, представленной на рис. 1.2. 
Для получения квадратной матрицы использовать функцию.
1) Одна клетка влево
2) вниз по побочной диагонали
3) Одна клетка вниз
4) вверх по основной диагонали
до центральной основной диагонали
1) 
*/
#include <iostream>
#include <vector>

using namespace std;
void filling_arrat(double* a) {
    for (int i = 0; i < sizeof(a)/sizeof(double); i++)
        a[i] = i;
}
void filling_matrix(vector<vector <double>> &matrix){
    for (int i = 8; i > 0; i--){
        for (int j = 0; j < 8; j++){
            
        }
    }
}

int main() {
    double a[64];
    vector<vector <double>> matrix(8, vector<double>(8));

}