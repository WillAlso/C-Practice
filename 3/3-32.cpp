#include <iostream>
#include <cmath>
#include <iomanip>
#include <memory.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	for(int i = 0;i < n;i++)
	{
		a[i] = new int[n];
		memset(a[i],0,n * sizeof(int));
	}
	int m = (n + 1) / 2;
	int row,col;
	for(row = 0;row < n;row++)
	{
		for(col = 0;col < n;col++)
		{
			if((row < m && col < m) || (row >= m && col >= m))
			{
				a[row][col] = abs(row - col);
			}else
			{
				a[row][col] = abs(row + col - n + 1);
			}
		}
	}
	for(row = 0;row < n;row++)
	{
		for(col = 0;col < n;col++)
		{
			cout << setw(4) << a[row][col];
		}
		cout << endl;
	}
	return 0;
}
