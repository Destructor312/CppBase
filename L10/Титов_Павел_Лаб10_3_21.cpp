/*
Титов Павел Сергеевич, 04-1
Лабораторная работа №10
Задание 3, Вариант 21 (10)

10. Даны три слова. Напечатать только те буквы слов, которые есть лишь в одном из слов. 
Рассмотреть два варианта: 
    1) повторяющиеся буквы каждого слова рассматриваются; 
    2) повторяющиеся буквы каждого слова не рассматриваются.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<string> words;
    string str1, str2;
    bool b = false;
 
    cin >> str1; // заполняем два массива в каждое пишем слово
    cin >> str2;

    for (int i = 0; i < str1.length(); i++)
    {
        b = false;
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                b = true;
                break;
            }
        }
        if (!b)
            words.push_back(string(1, str1.at(i)));
    }
    for (int i = 0; i < str2.length(); i++)
    {
        b = false;
        for (int j = 0; j < str1.length(); j++)
        {
            if (str2[i] == str1[j])
            {
                b = true;
                break;
            }
        }
        if (!b)
            words.push_back(string(1, str2.at(i)));
    }

    cout << "повторяющиеся буквы каждого слова рассматриваются" << endl;
    for (vector<string>::iterator it = words.begin(); it!=words.end() ; ++it)
        cout << *it << ", ";
    cout << endl;
    
    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());

    cout << "повторяющиеся буквы каждого слова не рассматриваются" << endl;
    for (vector<string>::iterator it = words.begin(); it!=words.end() ; ++it)
        cout << *it << ", ";
}