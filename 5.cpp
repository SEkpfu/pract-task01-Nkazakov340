#include<iostream>
using namespace std;

int start(double& time, double& s)
{
	cout << "���������� ����� ";
	cin >> time;
	cout << "������ ";
	cin >> s;
	return(0);
}

int f(double time, double s)
{
	double money, tax, sum;
	money = time * s;
	tax = money * 13 / 100;
	sum = money - tax;
	return (sum);
}

int main() {
	setlocale(LC_ALL, "rus");
	double time1, time2, s1, s2;
	cout << "������ ��������\n";
	start(time1, s1);
	cout << "������ ��������\n";
	start(time2, s2);
	double a = f(time1, s1);
	double b = f(time2, s2);
	if (a == b)
	{
		cout << "��� �������� ���������� ���������� �����\n";
	}
	else
	{
		if (a > b)
		{
			cout << "������ �������� ��������� ������\n";
		}
		else
		{
			cout << "������ �������� ��������� ������\n";
		}
	}
	cout << "������ ����������" << a + b;
}