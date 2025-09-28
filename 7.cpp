#include<iostream>
using namespace std;

int start(double& time, double& s)
{
	cout << "Количество часов ";
	cin >> time;
	cout << "Ставка ";
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
		cout << "Работник " << i+1<<"\n";
		start(time, s);
		a = f(time, s);
		cout << "Общая заработанная сумма " << i + 1 << "-го работника - " << a << "\n";
		allsum += a;
	}
	cout << "Средняя зарплата в бригаде - " << allsum / 5;
}