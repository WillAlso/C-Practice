#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			cin >> a[i][j];
		}
	}
	int col,max;
	bool flag;
	for(int i = 0;i < 5;i++)
	{
		max = a[i][0];
		flag = true;
		col = 0;
		for(int j = 1;j < 5;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				col = j;
			}
		}
		for(int k = 0;k < 5;k++)
		{
			if(max > a[k][col])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			cout << "a[" << i << "][" << col << "]" << endl;
			break;
		}
	}
	if(!flag)
	{
		cout << "No found!" << endl;
	}
	return 0;
}
