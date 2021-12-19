/*
Лабораторная №4
Задание 7 Вариант 21
Даны вещественные x1,x2,x3,y1,y2,y3. 
Принадлежит ли начало координат треугольнику с вершинами (x1,y1), (x2,y2), (x3,y3). 
*/
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double ax, bx, cx, ay, by, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    double ab = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
    double ac = sqrt(pow(cx - ax, 2) + pow(cy - ay, 2));
    double bc = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
    double Sabc1 = abs((bx-ax)*(cy-ay) - (cx-ax)*(by-ay)) / 2;  // (ax; ay) (bx; by) (cx; cy)
    double Sabc2 = abs((bx-0)*(cy-0) - (cx-0)*(by-0)) / 2;      // (0; 0) (bx; by) (cx; cy)
    double Sabc3 = abs((0-ax)*(cy-ay) - (cx-ax)*(0-ay)) / 2;    // (ax; ay) (0; 0) (cx; cy)
    double Sabc4 = abs((bx-ax)*(0-ay) - (0-ax)*(by-ay)) / 2;    // (ax; ay) (bx; by) (0; 0)

    if ((Sabc2 + Sabc3 + Sabc4) == Sabc1) cout << "Yes";
    else cout << "no";
}
