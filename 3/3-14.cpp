#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int i,j,temp;
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j < 10 - 1 - i;j++)
		{
			if(a[j + 1] < a[j])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
