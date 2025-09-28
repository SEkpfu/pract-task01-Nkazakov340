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

int min_el(float M[],int n)
{
	double minel = pow(10, 10);
	int n_minel = 0;
	for (int i = 0; i < n; i++)
	{
		if (minel >M[i])
			{
			minel = M[i];
			n_minel = i;
			}
			
	}
	return n_minel;
}

int max_el(float M[],int n)
{
	double maxel = -(pow(10, 10));
	for (int i = 0; i < n; i++)
	{
		if (maxel < M[i])
		{
			maxel = M[i];
		}

	}
	return maxel;
}
int max_n_el(float M[], int n)
{
	double maxel = -(pow(10, 10));
	int nmax;
	for (int i = 0; i < n; i++)
	{
		if (maxel < M[i])
		{
			maxel = M[i];
			nmax = i;
		}

	}
	return nmax;
}

int K_bol(float M[], double x,int n)
{
	int k = 0;
	for (int i = 0; i < n; i++) 
	{
		if (M[i] > x)
		{
			k += 1;
		}
	}
	return k;
}
int N_K_bol(float M[], double x, int n)
{
	int k = 0;
	float* A;
	A = new float[n];
	for (int i = 0; i < n; i++)
	{
		if (M[i] > x)
		{
			A[k++] = i;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << A[i]+1 << " ";
	}
	return 0;
}

int Sum_el(float M[],int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += M[i];
	}
	return sum;
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
	float* M_time, * M_tax, * M_sum, * M_stav, * n_50k;
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
	int maxnum = 0;
	cout << "Меньше всех получил работник номер " << (min_el(M_sum,n))+1 << endl;
	cout << "Больше всех " << (max_el(M_sum, n)) + 1 << " руб получил работник номер " << (max_n_el(M_sum,n))+1 << endl;
	cout << K_bol(M_sum, 50000, n) << " человек получили более 50000 руб. Их номера: "; N_K_bol(M_sum, 50000, n);
	cout << "Общая сумма налога уплаченая бригадой - " << Sum_el(M_tax,n)<< endl;
}