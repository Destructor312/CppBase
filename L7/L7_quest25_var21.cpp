/*
Лабораторная работа №7
Задание 25 Вариант 21
В заданный текст входит каждая из букв слова 'WinCtr' по одному разу.
*/
#include <iostream>

using namespace std;
int main(){
    char c2;
    bool flag = true;
    int Wc = 0, ic = 0, nc = 0, Cc = 0, tc = 0, rc = 0;
    int num;
    cout << "Choose loop;\n1: for\n2: while\n3: do while\n> ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Start input the text:\n";

        for (;c2 != '.';) {
            cout << "> ";
            cin >> c2;
            switch (c2)
            {
            case 'W': Wc++; break;
            case 'i': ic++; break;
            case 'n': nc++; break;
            case 'C': Cc++; break;
            case 't': tc++; break;
            case 'r': rc++; break;
            default: break;
            }
        }
        break;
    case 2:
        cout << "Start input the text:\n";

        while (c2 != '.') {
            cout << "> ";
            cin >> c2;
            switch (c2)
            {
            case 'W': Wc++; break;
            case 'i': ic++; break;
            case 'n': nc++; break;
            case 'C': Cc++; break;
            case 't': tc++; break;
            case 'r': rc++; break;
            default: break;
            }
        }
        break;
    case 3:
        cout << "Start input the text:\n";

        do {
            cout << "> ";
            cin >> c2;
            switch (c2)
            {
            case 'W': Wc++; break;
            case 'i': ic++; break;
            case 'n': nc++; break;
            case 'C': Cc++; break;
            case 't': tc++; break;
            case 'r': rc++; break;
            default: break;
            }
        } while (c2 != '.');
        break;
    
    default:
        cout << "Chouse the currect version"; return 0;
    }
    cout << ((Wc == 1 && ic == 1 && nc == 1 && Cc == 1 && tc == 1 && rc == 1) 
    ? "Ye, 1 letter = 1 time" : "No ...");
}