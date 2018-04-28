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
	int t = 1;
	bool lwalk = true;
	for(i = n - 1;i >= 0;i--)
	{
		if(lwalk)
		{
			for(j = n - 1;j >= 0;j--)
			{
				a[i][j] = t++;
			}
			lwalk = false;
		}else
		{
			for(j = 0;j <= n - 1;j++)
			{
				a[i][j] = t++;
			}
			lwalk = true;
		}
	}
	for(i = 0;i <= n - 1;i++)
	{
		for(j = 0;j <= n - 1;j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
