#include <iostream>
#include <memory.h>
#include <iomanip>
using namespace std;
int main()
{
	int a[10][10];
	for(int i = 0;i < 10;i++)
	{
		memset(a[i],0,10 * sizeof(int));
		a[i][0] = 1;
	}
	for(int i = 1;i < 10;i++)
	{
		for(int j = 1;j <= i;j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for(int i = 0;i < 10;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
