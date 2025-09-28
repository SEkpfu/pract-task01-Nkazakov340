#include<iostream>
using namespace std;
int f(double* t, double* s, double* pr)
{
	setlocale(LC_ALL, "RU");
	cout << "Количество часов ";
	cin >> *t;
	cout << "Ставка ";
	cin >> *s;
	cout << "% премии ";
	cin >> *pr;
	return 0;
}
int main()
{
	double t, s, pr;
	f(&t, &s, &pr);
	cout << "Заработаная сумма" << t * s + (s * pr / 100);
}