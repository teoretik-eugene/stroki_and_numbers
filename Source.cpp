#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, t;
	// ������� ����� �����:
	char a[30][20];
	for (i = 0; i < 30; i++) {
		gets_s(a[i]);
		if (! (a[i][0])) { break; }
	}
	t = i;
	
	// ������� ������ ������� � �������:
	cout << "��������� ���� ������:" << endl;

	for (i = 0; i <= t; i++) {
		cout << a[i] << endl;
	}

	// ������� ��������� ���� � �������

	int numbers[30];
	//������� ������ �� 30-�� ���������, ������� ��������� 0-��

	for (int m = 0; m < 30; m++) {
		numbers[m] = 0;
	}

	cout << "����� ��������� �����: " << endl;
	for (i = 0; i <= t; i++) {	// ����� ������ ��������� ������� 
		int j, n;
		int l = strlen(a[i]);		// ��������� ����� ������ ������
		char word[20];		// ������, � ������� ����� ���������� "�����", ����������� ��������
		for (j = 0; j < l; j++) {
			for (n = 0; a[i][j] != ' ' && a[i][j]; n++, j++) {		// ���� ������
				word[n] = a[i][j];
			}
			word[n] = '\0';
			//cout << word << endl;
			numbers[i] = numbers[i] + atoi(word);	// ��������� ������ � ����� � ������� ����� ���� ����� � ���������� � ������
		}
		cout << numbers[i] << endl;
	}

	// ����� ������������ ������

	int min = numbers[0];

	for (int m = 0; m <= t; m++) {					// ���� ���������� ����� � �������
		if (min > numbers[m] && numbers[m]!=0) { min = numbers[m]; }
	}

	// ���� ������ ����� � ���� ����������� ������
	cout << "������ ����� � ����������� ����������" << endl;
	for (int m = 0; m <= t; m++) {
		if (numbers[m] == min) { cout << m << endl; }
	}

	return 0;
}