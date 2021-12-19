/*
10. Даны три слова. Напечатать только те буквы слов, которые есть лишь в одном из слов. Рассмотреть два варианта: 
	1) повторяющиеся буквы каждого слова рассматриваются; 
	2) повторяющиеся буквы каждого слова не рассматриваются. 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_once(string str, char c){
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == c) {
            count++;
            if (count == 2) return false;
        }
    }
    return count == 1;
}

string getDistinctLetters(string first, string second, string third) {
    string agg = first + second + third;

    string temp = agg;
    agg.erase(0, agg.length());

    for (int i = 0; i < temp.length(); i++) {
        if (is_once(temp, temp.at(i))) {
            agg += temp.at(i);
        }
    }
    return agg;
}

int main() {
    string first = "proger";
    string second = "avtobus";
    string third = "trainerr";

    cout << getDistinctLetters(first, second, third) << endl;
}