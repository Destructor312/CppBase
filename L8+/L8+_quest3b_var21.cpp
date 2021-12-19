/*
Лабораторная работа 8+
Задание 3, вариант 4(б)
б) Первый элемент k-й строки является максимальным в строке. 
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {

	int k, maxnumber = 0, minnumber = 10, string_number, flag = 1;
	srand(time(NULL));
	cout << "Размерность матрицы (нечётное число от 3 до 25): ";
	cin >> k;

	vector <int> numbers;
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

    cout << "Введите номер строки: ";
    cin >> string_number;

    string_number -= 1;
    for (int column_number = 1; column_number != k; column_number++) {
        if (matrix[string_number][0] <= matrix[string_number][column_number]) {
            flag = 0;
        }
    }
    cout << (flag ? "True" : "False") << endl;
}