#include <iostream>
#include <cmath>

bool isPrime(int);
int get_primes(int, int);

using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (isPrime(n) ? "True" : "False") << endl;
    int n1, n2;
    cin >> n1 >> n2;
    cout << get_primes(n1, n2);
}

bool isPrime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; (i*i) <= n; i+=2){
        if(n % i == 0 ) return false;
    }
    return true;
}

int get_primes(int n1, int n2){
    int counter = 0;
    for (int i = n1; i < n2; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) break;
            else if (j+1 > sqrt(i)){ 
                counter++;}
        }   
    return counter;
}
