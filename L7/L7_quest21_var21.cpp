/*
Лабораторная работа №7
Задание 21 Вариант 21
Все английские буквы, входящие в текст, 
упорядочены по возрастанию.
*/
#include <iostream>

using namespace std;
int main(){
    char c1, c2;
    bool flag = true;
    int num;
    cout << "Choose loop;\n1: for\n2: while\n3: do while\n> ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Start input the text:\n> ";
        c1 = 1;
        
        for (; c2 != '.';) {
            cout << "> ";
            cin >> c2; c2 = tolower(c2);
            if (!('a' <= c2 <= 'z')) {continue;}
            if (c2 == '.') break;
            if ((int)(c2) < (int)(c1)) flag = false;
            c1 = c2;
        }
        break;
    case 2:
        cout << "Start input the text:\n> ";
        cin >> c1; c1 = tolower(c1);

        while (c2 != '.') {
            cout << "> ";
            cin >> c2; c2 = tolower(c2);
            if (c2 == '.') break;
            if ((int)(c2) < (int)(c1)) flag = false;
            c1 = c2;
        }
        break;
    case 3:
        cout << "Start input the text:\n> ";
        cin >> c1; c1 = tolower(c1);

        do {
            cout << "> ";
            cin >> c2; c2 = tolower(c2);
            if (c2 == '.') break;
            if ((int)(c2) < (int)(c1)) flag = false;
            c1 = c2;
        } while (c2 != '.');
        break;
    
    default:
        cout << "Chouse the currect version"; return 0;
    }
    cout << (flag ? "All en letters in asc order" : "Not all en letters in asc order");
}