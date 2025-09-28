#include<iostream>
using namespace std;

int start(double& time, double& s)
{
	cout << "Количество часов ";
	cin >> time;
	cout << "Ставка ";
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
	cout << "Первый работник\n";
	start(time1, s1);
	cout << "Второй работник\n";
	start(time2, s2);
	double a = f(time1, s1);
	double b = f(time2, s2);
	if (a == b)
	{
		cout << "Оба работник заработали одинаковую сумму\n";
	}
	else
	{
		if (a > b)
		{
			cout << "Первый работник заработал больше\n";
		}
		else
		{
			cout << "Второй работник заработал больше\n";
		}
	}
	cout << "Вместе заработано" << a + b;
}