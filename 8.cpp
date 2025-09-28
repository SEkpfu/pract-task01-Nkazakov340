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
	cout << "Количество работников\n";
	cin >> n;
	double allsum = 0;
	float* M_time,* M_tax,* M_sum,* M_stav,*n_50k;
	M_time = new float[n];
	M_tax = new float[n];
	M_sum = new float[n];
	M_stav = new float[n];
	
	for (int i = 0; i < n; i++)
	{
		double time, s;
		cout << "Работник " << i + 1 << "\n";
		start(time, s);
		M_time[i] = time;
		M_stav[i] = s;
		M_tax[i] = tax(time, s);
		M_sum[i] = f(time, s);
	}

	double minzp = pow(10, 10), maxzp = 0, sumtax = 0;
	double n_minzp = 0, n_maxzp = 0, k_50k = 0;
	int p = 0;
	n_50k = new float[n];
	for (int i = 0; i < n; i++)
	{
		if (minzp > M_sum[i])
		{
			minzp = M_sum[i];
			n_minzp = i+1;
		}
		if (maxzp < M_sum[i])
		{
			maxzp = M_sum[i];
			n_maxzp = i+1;
		}
		if (M_sum[i] > 50000)
		{
			k_50k += 1;
			n_50k[p++] = i+1;
		}
		sumtax += M_tax[i];
	}
	cout << "Меньше всех получил работник номер " << n_minzp << endl;
	cout << "Больше всех - " << maxzp << " получил работник номер " << n_maxzp << endl;
	cout << k_50k << " работника получили более 50000 руб. Их номера: ";
	for (int i = 0; i < p; i++)
	{
		cout << n_50k[i] << ",";
	}
	cout << "Общая сумма налога уплаченая бригадой - " << sumtax;
}