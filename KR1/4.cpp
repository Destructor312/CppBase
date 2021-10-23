#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    if (   ((x > -2) and (x < 0) and (y >= pow(x, 2))) 
        or ((x > 0) and (x < 2) and (y <= pow(x, 2)))
        or ((x > -2) and (x < 0) and (y <= pow(-x, 2)))
        or ((x > 0) and (x < 2) and (y <= pow(-x, 2)))){
        cout << "da, prinadlejit";
    } else {
        cout << "net";
    }
}