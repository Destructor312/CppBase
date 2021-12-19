/*
Лабораторная работа 8+
Задание 3, вариант 21(а)
Минимальный элемент k-й строки равен максимальному 
элементу предпоследнего столбца.
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
	int k, maxnum = 0, minnum = 10, string_num;
	srand(time(NULL));
	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <vector <int>> matrix(k, vector <int>(k));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i != k; i++) {
		for (int j = 0; j != k; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
    cout << "Номер строки: ";
    cin >> string_num;

    string_num -= 1;
    for (int column_num = 0; column_num != k; column_num++) {
        if (matrix[string_num][column_num] < minnum)
            minnum = matrix[string_num][column_num];
    }
    for (int string_num = 0; string_num != k; string_num++) {
        if (matrix[string_num][k - 2] > maxnum)
            maxnum = matrix[string_num][k - 2];
    }
    cout << (maxnum == minnum ? "True" : "False") << endl;
}