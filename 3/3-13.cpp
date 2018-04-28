#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j,t;
	for(i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	for(i = 0;i < 10;i++)
	{
		t = i;
		for(j = i + 1;j < 10;j++)
		{
			if(a[j] < a[t])
			{
				t = j;
			}
		}
		if(t != i)
		{
			int n = a[i];
			a[i] = a[t];
			a[t] = n;
		}
	}
	for(i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
