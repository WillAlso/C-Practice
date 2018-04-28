#include <iostream>
#include <iomanip>
#include <memory.h>
using namespace std;
int main()
{
	int i,j,n;
	cin >> n;
	int **a = new int*[n];
	for(i = 0;i < n;i++)
	{
		a[i] = new int[n];
		memset(a[i],0,n * sizeof(int));
	}
	int row = 0,col = 0;
	a[0][0] = 1;
	int num = 2;
	for(i = 1;i < n;i++)
	{
		row = 0;
		col = i;
		a[row][col] = num++;
		while(row < i)
		{
			a[++row][col] = num++;
		}
		while(col > 0)
		{
			a[row][--col] = num++;
		}
	}
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout <<endl;
	}
	return 0;
}
