#include<iostream>
using namespace std;

int tax(double time, double s)
{
	double money, tax;
	money = time * s;
	tax = money * 13 / 100;
	return tax;
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
	int n;
	cout << "Введите количество месяцев\n";
	cin >> n;
	double M_time[4][3], M_stav[4][3], M_tax[4][3], M_zp[4][3];
	for (int i = 0; i < 4; i++)
	{
		cout << "\nВведите данные для " << i+1 << " работника\n";
		for (int j = 0; j < n; j++)
		{
			cout << j+1 << " месяц\n";
			cout << "Количество часов\n";
			cin >> M_time[i][j];
			cout << "Ставка\n";
			cin >> M_stav[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M_tax[i][j] = M_time[i][j] * M_stav[i][j] * 13 / 100;
			M_zp[i][j] = M_time[i][j] * M_stav[i][j] - M_tax[i][j];
		}
	}
	cout << "Первый работник во втором месяце получил на руки - " << M_zp[0][1]<<endl;
	cout << "Удержанная сумма у третьего работника за весь год - ";
	int sumtax3 = 0;
	for (int i = 0; i < n; i++)
	{
		sumtax3 += M_tax[2][i];
	}
	cout << sumtax3 << endl;
	double maxsum3 = 0;
	int num3;
	for (int i = 0; i < 4; i++)
	{
		if (M_zp[i][3] > maxsum3)
		{
			maxsum3 = M_zp[i][2];
			num3 = i;
		}
	}
	cout << "Больше всех в третьем месяце заработал работник номер " << num3+1<<endl;

	int sum_zp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum_zp += M_zp[i][j];
		}
	}
	cout << "За весь год бригада заработала - " << sum_zp<<endl;
 }