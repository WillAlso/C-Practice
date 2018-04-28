#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int t;
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	t = a[0];
	for(int i = 0;i < 9;i++)
	{
		a[i] = a[i + 1];
	}
	a[9] = t;
	for(int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
