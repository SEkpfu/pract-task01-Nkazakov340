#include<iostream>
using namespace std;

int start(double& time, double& s, double& pr)
{
	cout << "���������� ����� ";
	cin >> time;
	cout << "������ ";
	cin >> s;
	cout << "% ������ ";
	cin >> pr;
	return 0;
}

int f(double& time, double& s, double& pr)
{
	double money, tax, sum;
	money = time * s + (s * pr / 100);
	tax = money * 13 / 100;
	sum = money - tax;
	cout << "�������� - " << money <<"\n";
	cout << "���������� ����� - " << tax << "\n";
	cout << "����� �� ������� ������ - " << sum << "\n";
	return 0;
}

int main() {
	setlocale(LC_ALL, "RU");
	double time, s, pr;
	start(time,s,pr);
	f(time, s, pr);
	return 0;
}