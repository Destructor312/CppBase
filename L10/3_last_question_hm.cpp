/*Струнин Виталий Дмитриевич, группа 03-1
Лабораторная работа 10
Задания:
1. Получить массив слов, содержащих удвоенное м ("мм"). (Вариант 4)
2. В строке есть восклицание (!) и вопрос (?). (Вариант 4)
3. Даны три слова. Напечатать только те буквы слов, которые есть лишь в одном из слов. Рассмотреть два варианта: 
	а) повторяющиеся буквы каждого слова рассматриваются; 
	б) повторяющиеся буквы каждого слова не рассматриваются.  (Вариант 10)
*/
#include <iostream>
#include <string>
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
void ContainsMM(vector <string> &words) {
	bool flag = 0;
	for (int i = 0; i < words.size(); i++) {
		flag = 0;
		for (int j = 0; j < words[i].size() - 1; j++){
			if (((words[i])[j] == 'м') && ((words[i])[j + 1] == 'м')) {
				flag = 1;
				cout << words[i] << ' '; break;
			}
		}
	}
	cout << endl;
}
void ShowVector(vector <string> words) {
	for (int i = 0; i != words.size(); i++) {
		if (i % 10 == 0)
			cout << endl;
		cout << words[i] << " ";
	}
	cout << endl;
}
void ContainsQuestionExclamationMark(string text) {
	bool Qflag = 0, Eflag = 0;
	for (int i = 0; i != text.size(); i++) {
		if (text[i] == '?')
			Qflag = 1;
		if (text[i] == '!')
			Eflag = 1;
	}
	if (Eflag == 1 && Qflag == 1)
		cout << "Строка содержит вопросительный и восклицательный знаки!" << endl;
	else if (Eflag == 1 && Qflag == 0)
		cout << "Строка содержит восклицательный знак, но не содержит вопросительный" << endl;
	else if (Eflag == 0 && Qflag == 1)
		cout << "Строка содержит вопросительный, но не восклицательный знак" << endl;
	else
		cout << "Строка не содержит ни вопросительный, ни восклицательный знак" << endl;
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
	cout << "1. Получить массив слов, содержащих удвоенное м (мм). (Вариант 4)" << endl;
	cout << "2. В строке есть восклицание (!) и вопрос (?). (Вариант 4)" << endl;
	cout << "3. Даны три слова. Напечатать только те буквы слов, которые есть лишь в одном из слов. Рассмотреть два варианта:" << endl;
	cout << "	а) повторяющиеся буквы каждого слова рассматриваются; " << endl;
	cout << "	б) повторяющиеся буквы каждого слова не рассматриваются.  (Вариант 10)" << endl;
	int keep_going = 1, decision;
	while (keep_going == 1) {
		cout << "Какую задачу будем решать? Введите номер задачи: ";
		cin >> decision;
		cout << endl;
		switch (decision) {
		case 1: {
			vector <string> words;
			string word = "", text;
			cout << "Введите текст одной строкой: ";
			cin.ignore();
			getline(cin, text);
			split(words, text);
			ContainsMM(words);
			break;
		}
		case 2: {
			vector <string> words;
			string word = "", text;
			cout << "Введите текст одной строкой: ";
			cin.ignore();
			getline(cin, text);
			ContainsQuestionExclamationMark(text);
			break;
		}
		case 3: {
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
			break;
		} 
		default:
			cout << "Ошибка!";
			cout << endl;
		}
		cout << "Введите 1, чтобы продолжить выполнение программы или любой символ, чтобы завершить: ";
		cin >> keep_going;
		cout << endl;
	}
	return 0;
}