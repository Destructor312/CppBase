/*
Титов Павел Сергеевич, 04-1
Лабораторная работа №10
Задание 1, Вариант 21 (4)
Получить массив слов, содержащих удвоенное м ("мм").
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    vector<string> words;
    string word;
    for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
        int found = it->find("мм");
        if (found == string::npos) break;
    }
}