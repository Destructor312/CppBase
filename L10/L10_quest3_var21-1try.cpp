/*
10. Даны три слова. Напечатать только те буквы слов, которые есть лишь в одном из слов. Рассмотреть два варианта: 
	1) повторяющиеся буквы каждого слова рассматриваются; 
	2) повторяющиеся буквы каждого слова не рассматриваются. 
*/
#include <iostream>
#include <vector>

using namespace std;

void split(vector <string> &words, string text) {
	text.push_back(' ');
	string word = "";
	for (int i = 0; i != text.size(); i++) {
		if (text[i] != ' ')
			word.push_back(text[i]);
		else {
			words.push_back(word);
			word = "";
		}
	}
}

void UniqueLettersRepeat(vector <string> words) {
	bool flag = 1;
	for (int i = 0; i != words[0].size(); i++) {
		flag = 1;
		for (int j = 0; j != words[1].size(); j++) {
			if (words[0][i] == words[1][j]) {
				flag = 0; break;
			}
		}
		if (flag == 0)
			continue;
		else {
			for (int k = 0; k != words[2].size(); k++) {
				if (words[0][i] == words[2][k]) {
					flag = 0; break;
				}
			}
		}
		if (flag == 1)
			cout << (words[0])[i] << " ";
	}
}

int CountLetters(string word, char letter) {
	int counter = 0;
	for (int i = 0; i != word.size(); i++) {
		if (letter == word[i])
			counter += 1;
	}
	return counter;
}

string WordWithoutRepeats(string word) {
	string new_word = "";
	for (int i = 0; i != word.size(); i++) {
		if (CountLetters(new_word, word[i]) == 0)
			new_word.push_back(word[i]);
	}
	return new_word;
}

void UniqueLettersNoRepeats(vector <string> words) {
	string uniqueletters = "";
	for (int i = 0; i != words.size(); i++) {
		uniqueletters += WordWithoutRepeats(words[i]);
	}
	for (int i = 0; i != uniqueletters.size(); i++) {
		if (CountLetters(uniqueletters, uniqueletters[i]) == 1)
			cout << uniqueletters[i] << " ";
	}
	cout << endl;
}

int main() {
    string temp;
    string text;
    vector <string> words;
    do {
        cout << "Введите три слова через пробел: ";
        words.clear();
        cin.ignore();
        getline(cin, text);
        split(words, text);
        cout << endl;
    } while (words.size() != 3);
    
    int a = 1;
    cout << "Если учитывать повторяющиеся символы: ";
    UniqueLettersRepeat(words);
    for (int i = 1; i != 3; i++){
        temp = words[0];
        words[0] = words[i];
        words[i] = temp;
        UniqueLettersRepeat(words);
    }
    cout << endl;
    cout << "Если не учитывать повторяющиеся символы: ";
    UniqueLettersNoRepeats(words);
}
