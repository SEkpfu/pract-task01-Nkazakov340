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
	return (sum);
}
int tax(double time, double s)
{
	double money, tax;
	money = time * s;
	tax = money * 13 / 100;
	return(tax);
}

int main() {
	setlocale(LC_ALL, "rus");
	string name1, name2;
	double time1, time2, s1, s2;
	cout << "������ ��������\n������� �������" << endl;
	cin >> name1;
	start(time1, s1);
	cout << "������ ��������\n������� �������" << endl;
	cin >> name2;
	start(time2, s2);
	double a = f(time1, s1);
	double b = f(time2, s2);

	if (a < 1000)
	{
		cout << name1 << " ������� ������ 1000 ���\n";
	}
	if (b < 1000)
	{
		cout << name2 << " ������� ������ 1000 ���\n";
	}

	if (tax(time1, s1) > 50)
	{
		cout << name1[0] << "-" << name1.back() << " - ����� ������ 50 ���\n";
	}
	if (tax(time2, s2) > 50)
	{
		cout << name2[0] << "-" << name2.back() << " - ����� ������ 50 ���\n";
	}
}