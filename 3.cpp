#include<iostream>
using namespace std;
int f(double* t, double* s, double* pr)
{
	setlocale(LC_ALL, "RU");
	cout << "���������� ����� ";
	cin >> *t;
	cout << "������ ";
	cin >> *s;
	cout << "% ������ ";
	cin >> *pr;
	return 0;
}
int main()
{
	double t, s, pr;
	f(&t, &s, &pr);
	cout << "����������� �����" << t * s + (s * pr / 100);
}