/*
Лабораторная работа №10
Задание 2, Вариант 21 (4)
Написать функцию, принимающую значение True, если 
В строке есть восклицание (!) и вопрос (?).
*/
#include <iostream>
#include <string>
#include <vector>

bool is_found(std::string);

using namespace std;

int main(){
    string word;
    cin >> word;
    cout << (is_found(word) ? "True" : "False");
}

bool is_found(std::string s){
    return ((s.find("!") != string::npos) || (s.find("?") != string::npos));
}
