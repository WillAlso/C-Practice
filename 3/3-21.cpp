#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	for(int i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			a[i][j] = 0;
		}
	}
	int pos_x,pos_y,cnt;
	pos_y = n / 2;
	pos_x = 0;
	cnt = 1;
	a[pos_x][pos_y] = cnt;
	int limit = n * n;
	while(cnt < limit)
	{
		cnt++;
		if(pos_x == 0 && pos_y == n - 1)
		{
			pos_x ++;
		}
		else
		{
			pos_x--;
			pos_y++;
			if(pos_x < 0)
			{
				pos_x = n - 1;
			}
			if(pos_y == n)
			{
				pos_y = 0;
			}
			if(a[pos_x][pos_y] != 0)
			{
				pos_x += 2;
				pos_y--;
			}
			a[pos_x][pos_y] = cnt;
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
