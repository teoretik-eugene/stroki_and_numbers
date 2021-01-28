#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, t;
	// Процесс ввода строк:
	char a[30][20];
	for (i = 0; i < 30; i++) {
		gets_s(a[i]);
		if (! (a[i][0])) { break; }
	}
	t = i;
	
	// Процесс вывода массива в консоль:
	cout << "Введенный вами массив:" << endl;

	for (i = 0; i <= t; i++) {
		cout << a[i] << endl;
	}

	// Процесс отделения слов в строках

	int numbers[30];
	//Запишем массив из 30-ти элементов, которые заполнены 0-ми

	for (int m = 0; m < 30; m++) {
		numbers[m] = 0;
	}

	cout << "Сумма введенных чисел: " << endl;
	for (i = 0; i <= t; i++) {	// Берем строку строчного массива 
		int j, n;
		int l = strlen(a[i]);		// Вычисляем длину взятой строки
		char word[20];		// Строка, в которую булем записывать "слова", разделенные пробелом
		for (j = 0; j < l; j++) {
			for (n = 0; a[i][j] != ' ' && a[i][j]; n++, j++) {		// Ищем пробел
				word[n] = a[i][j];
			}
			word[n] = '\0';
			//cout << word << endl;
			numbers[i] = numbers[i] + atoi(word);	// Переводим строки в числа и находим сумму этих чисел и записываем в массив
		}
		cout << numbers[i] << endl;
	}

	// Поиск максимальной строки

	int min = numbers[0];

	for (int m = 0; m <= t; m++) {					// Ищем мнимальное число в массиве
		if (min > numbers[m] && numbers[m]!=0) { min = numbers[m]; }
	}

	// Ищем номера строк с этим минимальным числом
	cout << "Номера строк с минимальным значениями" << endl;
	for (int m = 0; m <= t; m++) {
		if (numbers[m] == min) { cout << m << endl; }
	}

	return 0;
}