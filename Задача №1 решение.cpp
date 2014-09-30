#include <iostream>
#include <locale.h>
using namespace std;
int main (void) {
	int h1, h2, m1, m2, s1, s2;
	int err1, err2;
	setlocale (LC_ALL, "Russian");
	cout << "Введите начало промежутка (чч:мм:сс): "<< endl;
	err1 = scanf_s ("%d : %d : %d", &h1, &m1, &s1);
	if (err1 != 3) {
		cout << "Введены неверные данные" << endl;
		return 1;
	}
	cout << "Введите конец промежутка (чч:мм:сс): " << endl;
	err2 = scanf_s ("%d : %d : %d", &h2, &m2, &s2);
	if (err2 != 3) {
		cout << "Введены неверные данные" << endl;
		return 1;
	}
	s1 = h1 * 3600 + m1 * 60 + s1;
	s2 = h2 * 3600 + m2 * 60 + s2;
	cout << "Результат: " << s2 - s1 << endl;
	return 0;
} 
