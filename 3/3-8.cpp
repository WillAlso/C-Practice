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
	while(i < j)
	{
		while(i < j && a[i] < 0) i++;
		while(i < j && a[j] >= 0) j--;
		if(i < j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	for(int i = 0; i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
