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
			omnitrix[i][j] = rand() % 10;
		}
	}
}

void adapting_the_array(vector<int> &numbers, vector<vector <int>> &omnitrix, int k) {
	// Выборка "закрашенных" значений в доп. массив с начала до середины
	for (int i = 0; i != k / 2 + 1; i++) {
		for (int f = 0; f != k; f++) {
			if ((k / 2 - i <= f) && (f <= k / 2 + i))
				numbers.push_back(omnitrix[i][f]);
		}
	}
    // Выборка "закрашенных" значений в доп. массив с конца до середены
	for (int i = k - 1, cnt = 0; i != k / 2; i--, cnt++) {
		for (int f = 0; f != k; f++) {
			if ((k / 2 - cnt <= f) && (f <= k / 2 + cnt))
				numbers.push_back(omnitrix[i][f]);
		}
	}
}

void show_matrix(vector<vector <int>> &omnitrix, int k) {
 	for (int i = 0; i != k; i++) {
		for (int j = 0; j != k; j++)
			cout << omnitrix[i][j] << " ";
		cout << endl;
	}
}

int get_max_num(vector<int> &numbers) {
	int maxnumber = -1;
	for (int i = 0; i != size(numbers); i++) {
		if (numbers[i] > maxnumber)
			maxnumber = numbers[i];
	}
    return maxnumber;
}

int main() {
	int k;
	srand(time(NULL));

	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

    vector <int> numbers;
	vector <vector <int>> omnitrix(k, vector <int>(k));

	filling_the_array(omnitrix, k);
	adapting_the_array(numbers, omnitrix, k);
	show_matrix(omnitrix, k);

	cout << get_max_num(numbers) << endl;
}