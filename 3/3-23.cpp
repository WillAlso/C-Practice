#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	int i,j,t;
	for(i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	t = 1;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			a[i][j] = t++;
		}
	}
	for(i = n / 4;i <= n * 3 / 4 - 1;i++)
	{
		for(j = 0;j < n / 2;j++)
		{
			t = a[i][j];
			a[i][j] = a[i][n - 1 - j];
			a[i][n - 1 - j] = t;
		}
	}
	for(i = n / 4;i <= n * 3 / 4 - 1;i++)
	{
		for(j = 0;j < n / 2;j++)
		{
			t = a[j][i];
			a[j][i] = a[n - 1 - j][i];
			a[n-  1 - j][i] = t;
		}
	}
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
