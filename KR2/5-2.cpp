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
int Sin(){
    
}
int main(){
    double x[5];
    double y[5];
    filling_array(x);
    filling_array(y);
    cout << endl;
    cout << "Периметр равен: " << get_perimetr(x, y) << endl;
}