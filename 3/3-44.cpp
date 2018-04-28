#include <iostream>
using namespace std;
int main()
{
	int num[6],flag[1001] = {0};
	flag[0] = 1;
	int weigh[6] = {1,2,3,5,10,20};
	for(int i = 0;i < 6;i++)
	{
		cin >> num[i];
	}
	int cnt = 0;
	int k;
	for(int i = 0;i < 6;i++)
	{
		for(int j = 0;j < num[i];j++)
		{
			for(k = 1000;k >= weigh[i];k--)
			{
				if(flag[k - weigh[i]] == 1 && flag[k] == 0)
				{
					flag[k] = 1;
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
