#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i,j,n1,n2,define;
	int *row_sum,*col_row;
	int **a = new int*[n];
	for(i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	row_sum = new int[n];
	col_row = new int[n];
	memset(row_sum,0,n * sizeof(int));
	memset(col_row,0,n * sizeof(int));
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			cin >> a[i][j];
		}
	}
	define = n * (n * n + 1) / 2;
	n1 = n2 = 0;
	for(i = 0;i < n;i++)
	{
		n1 += a[i][i];
		n2 += a[i][n - 1 - i];
		for(j = 0;j < n;j++)
		{
			row_sum[i] += a[i][j];
			col_row[i] += a[j][i];
		}
	}
	bool flag = true;
	if(n1 != define || n2 != define)
	{
		flag =false;
	}
	for(i = 0;i < n;i++)
	{
		if(row_sum[i] != define || col_row[i] != define)
		{
			flag = false;
		}
	}
	if(flag)
	{
		cout << "Yes!" << endl;
	}
	else
	{
		cout << "No!" << endl;
	}
	return 0;
}
