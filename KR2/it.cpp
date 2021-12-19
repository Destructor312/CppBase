#include <iostream>

using namespace std;
void F(int n){
    if (n < 5){
        F(n+1);
        F(n+3);
        cout << n << endl;
    }
}
int main() {
    F(1);
}