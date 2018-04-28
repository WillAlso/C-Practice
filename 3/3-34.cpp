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
	int flag = 0;
	int row = 0;
	int col = -1;
	int num = 1;
	for(int i = n;i >= 1;i--)
	{
		for(int j = 0;j < i;j++)
		{
			switch(flag){
				case 0:
				{
					col++;
					break;
				}
				case 1:
				{
					row++;
					col--;
					break;
				}
				case 2:
				{
					row--;
					break;
				}
			}
			a[row][col] = num++;
		}
		flag = (flag + 1) % 3;
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n - i;j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
