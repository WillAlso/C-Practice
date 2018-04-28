#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int i = 0;
	int j = 9;
	int t = a[0];
	while(i < j)
	{
		while(i < j && a[j] >= t)
		{
			--j;
		}
		if(i < j)
		{
			a[i++] = a[j];
		}
		while(i < j && a[i] <= t)
		{
			++i;
		}
		if(i < j)
		{
			a[j--] = a[i];
		}
	}
	a[i] = t;
	for(int n = 0;n < 10;n++)
	{
		cout << a[n] << " ";
	}
	cout << endl;
	return 0;
}
