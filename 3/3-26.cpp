#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,n;
	cin >> n;
	int **a = new int*[n];
	for(i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	bool uwalk = true;
	int t = 1;
	int limit = n * n;
	int row = n - 1;
	int col = 0;
	a[row][col] = t;
	while(t < limit)
	{
		if(uwalk)
		{
			row --;
			col --;
		}else
		{
			row ++;
			col ++;
		}
		if(row == -1)
		{
			row ++;
			col = col + 2;
			uwalk = !uwalk;
		}
		if(col == n)
		{
			col --;
			row -= 2;
			uwalk = !uwalk;
		}
		if(row == n)
		{
			row --;
			uwalk = !uwalk;
		}
		if(col == -1)
		{
			col ++;
			uwalk = !uwalk;
		}
		a[row][col] = ++t;
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
