#include<iostream>
using namespace std;

int start(double& time, double& s)
{
	cout << "���������� ����� ";
	cin >> time;
	cout << "������ ";
	cin >> s;
	return 0;
}

int f(double time, double s)
{
	double money, tax, sum;
	money = time * s;
	tax = money * 13 / 100;
	sum = money - tax;
	return sum;
}

int main() {
	setlocale(LC_ALL, "RU");
	double allsum = 0;
	for (int i = 0; i < 5; i++)
	{
		double time, s, a;
		cout << "�������� " << i+1<<"\n";
		start(time, s);
		a = f(time, s);
		cout << "����� ������������ ����� " << i + 1 << "-�� ��������� - " << a << "\n";
		allsum += a;
	}
	cout << "������� �������� � ������� - " << allsum / 5;
}