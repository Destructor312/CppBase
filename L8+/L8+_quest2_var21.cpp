/*
Лабораторная работа 8+
Задание 2, вариант 21
(4): заполнить заштрихованную область матрицы 
единицами, остальное заполнить нулями
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
	int k, maxnumber = -1;

	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <vector <int>> omnitrix(k, vector <int>(k));
	// Заполнение нулями
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++)
		{
			omnitrix[i][j] = 0;
		}
	}
	// Заполнение нулями по шаблону
	for (int i = 0; i != k; i++) {
		// cout << "i=" << i << " k=" << k << "\n";
		for (int f = 0; f != k; f++) {
			// cout << "f=" << f << " " << (i == 0) << " " << (i == k - 1) << " " << (f == k - 1) << " " << (i == k / 2) << endl; 
			// первая строка || последняя строка|| правый край || центр
			if ((i == 0) || (i == k - 1) || (f == k - 1) || (i == k / 2))
				omnitrix[i][f] = 1;
		}
	}
	for (int i = 0; i != k; i++) {
		for (int f = 0; f != k; f++) {
			cout << omnitrix[i][f] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}