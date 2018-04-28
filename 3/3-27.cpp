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
	int t = 1;
	int row = 0;
	int col = 0;
	a[row][col] = 1;
	while(t < n * n)
	{
		while(row + 1 < n && a[row + 1][col] == 0)
		{
			a[++row][col] = ++t;
		}
		while(col + 1 < n && a[row][col + 1] == 0)
		{
			a[row][++col] = ++t;
		}
		while(row - 1 >= 0 && a[row - 1][col] == 0)
		{
			a[--row][col] = ++t;
		}
		while(col - 1 >= 0 && a[row][col - 1] == 0)
		{
			a[row][--col] = ++t;
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
