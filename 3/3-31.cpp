#include <iostream>
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
	int row,col;
	for(row = 0;row < n;row++)
	{
		for(col = 0;col < n;col++)
		{
			if(row == col || row + col == n - 1)
			{
				a[row][col] = 0;
			}
			if(row + col < n - 1 && row < col)
			{
				a[row][col] = row + 1;
			}
			if(row + col < n - 1 && row > col)
			{
				a[row][col] = col + 1;
			}
			if(row + col > n - 1 && row < col)
			{
				a[row][col] = n - col;
			}
			if(row + col > n - 1 && row > col)
			{
				a[row][col] = n - row;
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
