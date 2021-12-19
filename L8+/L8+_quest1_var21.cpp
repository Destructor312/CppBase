/*
Лабораторная 8+
Задание 1, вариант 4
Задание: определить максимальный элемент в выделенной области 
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
	int k, maxnumber = -1;
	srand(time(NULL));

	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <int> numbers;
	vector <vector <int>> omnitrix(k, vector <int>(k)); // k чисел равное 
	// Заполнение k*k матрицы любыми значениями
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++)
		{
			omnitrix[i][j] = rand() % 10;
		}
	}
	// Выборка "закрашенных" значений в доп. массив с начала до середины
	for (int i = 0; i != k / 2 + 1; i++) {
		cout << "1f: i=" << i << " k=" << k / 2 + 1 << "\n";
		for (int f = 0; f != k; f++) {
			cout << "2f: f=" << f << " " << (k / 2 - i <= f) << " " << (f <= k / 2 + i) << "\n"; 
			if ((k / 2 - i <= f) && (f <= k / 2 + i))
				numbers.push_back(omnitrix[i][f]);
		}
	}
	cout << "first while done" << endl;
	// Выборка "закрашенных" значений в доп. массив с конца до середены
	for (int i = k - 1, cnt = 0; i != k / 2; i--, cnt++) {
		cout << "1f: i=" << i << " cnt=" << cnt << "\n";
		for (int f = 0; f != k; f++) {
			cout << "2f: f=" << f << " " << (k / 2 - cnt <= f) << " " << (f <= k / 2 + cnt) << "\n"; 
			if ((k / 2 - cnt <= f) && (f <= k / 2 + cnt))
				numbers.push_back(omnitrix[i][f]);
		}
	}
	for (int i = 0; i != k; i++) {
		for (int j = 0; j != k; j++)
			cout << omnitrix[i][j] << " ";
		cout << endl;
	}
	// Поиск макс. элемента
	for (int i = 0; i != size(numbers); i++) {
		if (numbers[i] > maxnumber)
			maxnumber = numbers[i];
	}
	cout << endl;
	cout << maxnumber << endl;
	return 0;
}