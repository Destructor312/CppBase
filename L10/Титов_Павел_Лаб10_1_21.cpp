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

void filling_the_array(vector<string> &words) {
    string word;
    cin >> word;
    while (word != ".") {
        if (word.find("мм") != string::npos)
            words.push_back(word);
        
        cin >> word;
    }
}
void print_array(vector<string> &words) {
    for (vector<string>::iterator it = words.begin(); it!=words.end() ; ++it)
        cout << *it << ", ";
}
int main(){
    vector<string> words;
    filling_the_array(words);
    cout << "Массив слов, содержащих мм: ";
    print_array(words);
}