#include<iostream>
using namespace std;

float zp(double a, double b, double c)
{
	float i = a * b + (b * c / 100);
	return (i);
}
float tax(double s)
{
	double i = s * 13 / 100;
	return (i);
}
double f(double s, double t)
{
	double i = s - t;
	return i;
}
int main() {
	setlocale(LC_ALL, "RU");
	double t;
	double s;
	double pr;
	cout << "���������� ����� ";
	cin >> t;
	cout << "������ ";
	cin >> s;
	cout << "% ������ ";
	cin >> pr;
	cout << "����������� ����� - " << f(zp(t,s,pr),tax(zp(t, s, pr)));
}