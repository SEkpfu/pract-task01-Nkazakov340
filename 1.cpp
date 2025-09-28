#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double t;
	double s;
	double pr;
	cout << "Количество часов ";
	cin >> t;
	cout << "Ставка";
	cin >> s;
	cout << "% премии";
	cin >> pr;
	cout << "Заработаная сумма" << t * s + (s * pr / 100);
}