#include <iostream>
#include <cmath>

using namespace std;

int popKern(unsigned int); // Задание 2
float pythagoreanTheorem(float, float); // Задание 15
float circleRadius(float, float); // Задание 29
int exercise8(int);

int main() {
    unsigned int x = 9; // x for 1->2 exercise
    int a = 2; // a for 2->15 | 3->29 exercise
    int b = 3; // b for 2->15 | 3->29 exercise
    int e7 = 2; // for 4->7

    cout << "Input for 1 (2) exercise (example: 9): ";
    cin >> x;
    cout << "Answer for 1 (2) exercise: " << popKern(x) << endl;

    cout << "Input for 2 (15) exercise (example: 2 3): ";
    cin >> a >> b;
    cout << "Answer for 2 (15) exercise: " << pythagoreanTheorem(a, b) << endl;

    cout << "Input for 3 (29) exercise (example: 2 3): ";
    cin >> a >> b;
    cout << "Answer for 3 (29) exercise: " << circleRadius(a, b) << endl;

    cout << "Input for 4 (7) exercise (example: 2)): ";
    cin >> e7;
    cout << "Answer for 4 (7) exercise: " << exercise8(e7) << endl;

    return 0;
}

int popKern(unsigned int x) {
    int n = 0;
    for (; x; n++)
        x &= (x - 1); // убираем младший бит
    return n;
}

float pythagoreanTheorem(float a, float b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

float circleRadius(float a, float b) {
    return sqrt(pow(a, 2) + pow(b, 2)) / 2;
}

int exercise8(int a) {
    // a^28
    int b = a * a; // a^2
    int c = b * b; // a^4
    int d = c * c; // a^8
    int e = d * d * d * c; // a^28
    
    return e;
}