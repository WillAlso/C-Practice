#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int n;
	cin >> n;
	for(int i = 0;i < 10;i++)
	{
		if(a[i] == n)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}
