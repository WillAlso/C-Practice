#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int i,j,t;
	for(i = 1;i < 10;i++)
	{
		t = a[i];
		j = i - 1;
		while(j >= 0 && t < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = t;
	}
	for(i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
