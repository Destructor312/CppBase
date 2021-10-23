#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double A, Y1, Y0;

    cin >> A;
    Y0 = min(2*A, 0.96);
    for (int i;;i++){
        Y1 = (4 * Y0 + A / pow(Y0, 4))/ 5.0;
        double check = 5 * A * abs(Y1 - Y0)/4.0;
        if (check < 0.000001) break;
        Y0 = Y1;
    }
    cout << Y1;   
}