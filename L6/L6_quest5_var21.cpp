/*
Лабораторная работа №6
Задание 5 Вариант 21
Вычислить бесконечную сумму с заданной точностью eps (eps>0). 
Считать, что точность достигнута, если очередное слагаемое по модулю меньше eps, 
все последующие слагаемые можно уже не учитывать
S = x - x/2 + x/3 - x/4 + ... + (pow((-1), (n-1))) * x/n + ... + (abs(x)<1)
*/
#include <iostream>
#include <cmath>


using namespace std;
int main() {
	int x, counter = 1;
	double eps, n, s = 0;
	cin >> x >> eps;
	do {
		n = ((pow(-1, counter - 1)*x / double(counter)));
		s += n;
		counter += 1;
	} while (abs(n) >= eps);
	cout << s;
	return 0;
}
