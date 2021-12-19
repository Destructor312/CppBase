/*
Лабораторная работа №9
Задание 3 Вариант 21
1. Разбейте задачу на подзадачи (например, подзадача 
    1 – заполнение массива, подзадача 
    2 – вывод элементов массива на экран, подзадача 
    3 – нахождение максимума среди элементов массива, подзадача 
    4 – нахождение суммы элементов массива)
2. Определите функции для каждой подзадачи
3. Вызовите функции в нужном порядке для решения задачи.
*/
#include <iostream>
#include <vector>

using namespace std;

void filling_the_array(vector<vector <int>> &matrix, int k) {
    srand(time(nullptr));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

bool is_so_otvetstvenno_a(vector<vector <int>> &matrix, int k) {
	int maxnum = 0, minnum = 10, string_num = k;
    for (int column_num = 0; column_num != k; column_num++) {
        if (matrix[string_num][column_num] < minnum)
            minnum = matrix[string_num][column_num];
    }
    for (int string_num = 0; string_num != k; string_num++) {
        if (matrix[string_num][k - 2] > maxnum)
            maxnum = matrix[string_num][k - 2];
    }
    return maxnum == minnum;
}

bool is_so_otvetstvenno_b(vector<vector <int>> &matrix, int k) {
	int string_number, flag = 1, string_number = k;

    for (int column_number = 1; column_number != k; column_number++) {
        if (matrix[string_number][0] <= matrix[string_number][column_number]) {
            flag = 0;
        }
    }
    return flag;
}

void show_matrix(vector<vector <int>> &matrix, int k) {
	for (int i = 0; i != k; i++) {
		for (int j = 0; j != k; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int k, maxnum = 0, minnum = 10, string_num;
	srand(time(NULL));
	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <vector <int>> matrix(k, vector <int>(k));
	filling_the_array(matrix, k);
	show_matrix(matrix, k);
    
    cout << "Номер строки: ";
    cin >> string_num;

    cout << "Минимальный элемент k-й строки равен максимальному элементу предпоследнего столбца?" << endl;
    cout << (is_so_otvetstvenno_a(matrix, k) ? "True" : "False") << endl;
    cout << "Первый элемент k-й строки является максимальным в строке?" << endl;
    cout << (is_so_otvetstvenno_b(matrix, k) ? "True" : "False") << endl;
	return 0;
}