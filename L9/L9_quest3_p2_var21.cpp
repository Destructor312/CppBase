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

void filling_the_array(vector<vector <int>> &omnitrix, int k) {
    for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++)
		{
			omnitrix[i][j] = 0;
		}
	}
}

void editing_the_array(vector<vector <int>> &omnitrix, int k) {
	for (int i = 0; i != k; i++) {
		// cout << "i=" << i << " k=" << k << "\n";
		for (int f = 0; f != k; f++) {
			// cout << "f=" << f << " " << (i == 0) << " " << (i == k - 1) << " " << (f == k - 1) << " " << (i == k / 2) << endl; 
			// первая строка || последняя строка|| правый край || центр
			if ((i == 0) || (i == k - 1) || (f == k - 1) || (i == k / 2))
				omnitrix[i][f] = 1;
		}
	}
}

void show_matrix(vector<vector <int>> &omnitrix, int k) {
 	for (int i = 0; i != k; i++) {
		for (int f = 0; f != k; f++) {
			cout << omnitrix[i][f] << " ";
		}
		cout << endl;
	}   
}

int main() {
	int k, maxnumber = -1;

	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <vector <int>> omnitrix(k, vector <int>(k));
	filling_the_array(omnitrix, k);
	editing_the_array(omnitrix, k);
	show_matrix(omnitrix, k);
	cout << endl;
	return 0;
}