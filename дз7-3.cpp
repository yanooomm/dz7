/* ExamBase95  На вход подается текстовая строка, 
содержащая набор слов, набранных заглавными латинскими 
буквами и разделенных ровно одним пробелом. Найти 
количество слов, содержащих хотя бы одну букву «E».*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	string s;
	getline(cin, s);
	s += ' ';
	int counter = 0; 
	int k = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			if (s[i] == 'Е')
				k += 1;
		}
		else
		{
			if (k > 0)
				counter += 1;
			k = 0;
		}
	}
	cout << counter;
}

/*
СНЕГ ЗИМА КАТОК ЗАБОР ЛЫЖИ СНЕЖИНКА
2
*/

/*
ПУТЕШЕСТВИЕ ЛЕТО ПОЕЗД СОН КОТ ПОДУШКА ОДЕЯЛО
4
*/