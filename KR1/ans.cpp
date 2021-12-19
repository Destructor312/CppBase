/*
Контрольная работа №1
Вариант 3 
Задание 1
Даны действительные числа A,B,C,D. Если A<B<C<D, то каждое число заменить полусуммой максимального и минимального из оставшихся; если A>B>C>D то числа заменить максимальным модулем из оставшихся; в противном случае заменить все числа квадратом большего из них.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int max_n = 0;

    if ((A < B) and (B < C) and (C < D)){
        A = (max(max(B, C), D) + min(min(B, C), D)) / 2;
        B = (max(max(A, C), D) + min(min(A, C), D)) / 2;
        C = (max(max(B, A), D) + min(min(B, A), D)) / 2;
        D = (max(max(B, C), A) + min(min(B, A), D)) / 2;
    } else if ((A > B) and (B > C) and (C > D)){
        A = max(max(abs(B), abs(C)), abs(D));
        B = max(max(abs(A), abs(C)), abs(D));
        C = max(max(abs(B), abs(A)), abs(D));
        D = max(max(abs(B), abs(C)), abs(A));
    } else {
        max_n = pow(max(max(max(A,B),C),D), 2);
        A = max_n;
        B = max_n;
        C = max_n;
        D = max_n;
    }
}

/*
Задание 2
Дано натуральное число N. Вычислить
( cos1 cos1 + cos2 cos1 + cos2 + ... + cosN) / (sin1 sin1 + sin2 sin1 + sin2 + ... + sinN)
*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int N;
    cin >> N;
    double cos_n = 0;
    double sin_n = 0;

    for (int i = 1; i <= N; i++){
        cos_n += cos(i) + cos(i) * cos(1);
        sin_n += sin(i) + sin(i) * sin(1);
    }
    cout << cos_n / sin_n;
}
/*
3 задание
3. Дано действительное число A>0. Последовательность Y(0),Y(1),... образована по закону Y(0)=MIN(2*A,0.96); Y(i)=(4*Y(i-1)+A/Y(i-1)^4)/5, i=1,2,3,...Найти первый член Y(n), для которого 5*A*|Y(n)-Y(n-1)|/4<0.000001.
*/
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

// 4
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