/*
Контрольная работа №2
Вариант №1
1. (2 балла) 
Дан массив действительных чисел a1, …, an. 
Получить массив чисел b1, …, bn, 
которые связаны с a1, …, an следующим образом:
*/
#include <iostream>
#include <cmath>

using namespace std;

double get_b_by_i(double a[], int i){
    return (a[i-1] - a[i]) / 3;
}

void filling_array(double a[], int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        a[i] = rand() % 10;
    }
}

void filling_array_by_other_array(double a[], double b[], int n){
    b[1] = a[1];
    b[n] = a[n];
    for (int i = 2; i < n-1; i++)
        b[i] = get_b_by_i(a, i);
}

int main() {
    int n;
    cin >> n;
    double a[n], b[n];
    filling_array(a, n);
    filling_array_by_other_array(a, b, n);
}

// ------------------------------------------------------------------------------
/*
2. (2 балла) 
У прилавка в магазине выстроилась очередь из n покупателей. 
Время обслуживания продавцом i–го покупателя равно ti (i = 1, …, n). 
Пусть даны натуральное n и действительные t1, …, tn. 
Получить c1, …, cn, где ci — время пребывания 
i–го покупателя в очереди (i = 1, …, n). 
Указать номер покупателя, для обслуживания которого 
продавцу потребовалось самое большое время. 
Для получения массива С и номера покупателя использовать 
функции.
*/
#include <iostream>

using namespace std;

void filling_time_array(double t[], int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        t[i] = rand() % 10 + 1;
    }
}
void filling_time_c_array(double t[], double c[], int n){
    for (int i = 0; i < n; i++){
        double c_time_cnt = 0;
        for (int j = 0; j < i; j++)
            c_time_cnt += t[j];
        c[i] = c_time_cnt;
    }
}
int get_max_el_index(double a[], int n){
    double a_max = 0;
    int i_max = 0;
    for (int i=0; i<n; i++){
        if (a[i]>a_max){
            a_max = a[i];
            i_max = i;
        }
    }
    return i_max;
}
int main() {
    int n = 10; 
    double t[n];
    double c[n];
    filling_time_array(t, n);
    filling_time_c_array(t, c, n);
    cout << "номер покупателя, для обслуживания которого продавцу потребовалось самое большое время - ";
    cout << get_max_el_index(t, n) << endl;
}
// ------------------------------------------------------------------------------
// 3 нет, там не очень.
// ------------------------------------------------------------------------------
/*
4. (3 балла) Дана матрица действительных чисел A размером n×m. 
Найти минимум из сумм элементов каждого столбца. 
Для получения минимума и суммы соответствующего столбца использовать функции.
*/
#include <iostream>
#include <vector>

using namespace std;

void filling_array(vector<vector <double>> &a, int n, int m) {
    srand(time(nullptr));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            a[i][j] = rand() % 10;
    }
}

void printing_matrix(vector<vector <double>> &a, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

double get_sum_col(vector<vector <double>> &a, int n, int col){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][col];
    }
    return sum;
}

double get_min(vector<vector <double>> &a, int n, int m) {
    double min_ = 100;
    for (int i = 0; i < 6; i++){
        double sum_col = get_sum_col(a, n, i);
        if (sum_col < min_)
            min_ = sum_col;
    }
    return min_;
}
int main() {
    int n = 6, m = 6;
    vector<vector <double>> a(n, vector<double>(m));
    filling_array(a, n, m);
    printing_matrix(a, n, m);
    cout << get_min(a, n, m) << endl;
}
// ------------------------------------------------------------------------------
/*
5. (3 балла) 
Даны действительные числа x1, y1, x2, y2, …, x10, y10. 
Найти периметр десятиугольника, вершины которого имеют соответственно координаты (x1, y1), …, (x10, y10). 
Вычисления расстояния между двумя точками, заданными координатами, организовать с помощью функции.
*/
#include <iostream>
#include <cmath>

using namespace std;

void filling_array(double a[]){
    srand(time(nullptr));
    for (int i = 0; i < 5; i++)
        a[i] = rand() % 10;
}

double dlina(double x1, double y1, double x2, double y2){
    return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}

double get_perimetr(double x[], double y[]){
    double perimetr = 0;
    for (int xi = 1; xi < 5; xi++)
        for (int yi = 1; yi < 5; yi++)
            perimetr += dlina(x[xi-1], y[yi-1], x[xi], y[yi]);
    return perimetr;
}

int main(){
    double x[5];
    double y[5];
    filling_array(x);
    filling_array(y);
    cout << endl;
    cout << "Периметр равен: " << get_perimetr(x, y) << endl;
}
// ------------------------------------------------------------------------------
/*
6. (3 балла) 
Дан одномерный массив действительных чисел a1, ..., a64. 
Получить квадратную матрицу порядка 8, элементами которой являются числа a1, ..., a64, 
расположенные по схеме, представленной на рис. 1.3. 
Для получения квадратной матрицы использовать функцию.
*/
#include <iostream>

using namespace std;

void djsnake(int n, int** arr)
{
    int numbers = n + n - 1;
    int i = 0, j = 0;
    int p = 1;
    for (int q = 1; q <= numbers; q++)
    {
        if (i == 0 || j == n - 1) 
        {
            while (j > 0 && i < n - 1)
            {
                arr[i][j] = p++;
                i++;
                j--;
            }
            arr[i][j] = p++;
            if (i < n - 1) i++;
            else j++;
        } else {
            while (i > 0 && j < n - 1)
            {
                arr[i][j] = p++;
                i--;
                j++;
            }
            arr[i][j] = p++;

            if (j < n - 1) j++;
            else i++;
        }
    }
}

void print_matrix(int n, int** arr) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int** arr;
    int n = 8;
    int k;

    arr = new int* [n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    
    djsnake(n, arr);
    print_matrix(n, arr);
}
// ------------------------------------------------------------------------------
