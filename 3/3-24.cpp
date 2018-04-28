#include <iostream>
#include <iomanip>
using namespace std;
void swap(int &a,int &b)
{
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	int i,j;
	for(i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	int t = 1;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			a[i][j] = t++;
		}
	}
	int k,t1,t2;
	k = (n - 2) / 4;
	t1 = (n - 2) / 4 + 1;
	t2 = ((n - 2) / 4) * 3 + 2;
	for(i = 0;i < t1;i++)
	{
		for(j = t1;j < t2 - 1;j++)
		{
			swap(a[i][j],a[n - 1 - i][n - 1 - j]);
			swap(a[j][i],a[n - 1 - j][n - 1 - j]);
		}
	}
	for(i = 0;i <= k - 1;i++)
	{
		swap(a[k][i],a[k][n - 1 - i]);
		swap(a[3 * k + 1][i],a[3 * k + 1][n - 1 - i]);
		swap(a[k + 1][i],a[k + 1][n - 1 - i]);
	}
	for(i = k + 1;i <= 3 * k;i++)
	{
		swap(a[k][i],a[3 * k + 1][i]);
	}
	for(i = 0;i < n / 2;i++)
	{
		if(i != k)
		{
			swap(a[i][k],a[n - 1 - i][k]);
		}
	}
	swap(a[k][0],a[3 * k + 1][0]);
	for(i = k + 1;i < n / 2;i++)
	{
		swap(a[k][i],a[k][n - 1 -i]);
	}
	for(i = k + 1;i <= 3 * k;i++)
	{
		if(i != 2 * k)
		{
			swap(a[i][k],a[i][3 * k + 1]);
		}
	}
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			cout << setw(4) << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
