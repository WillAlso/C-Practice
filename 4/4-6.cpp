#include <iostream>
#include <memory.h>
using namespace std;
bool isright(int a[],int n)
{
	int i = 0;
	while(i < n)
	{
		if(a[i] % 2 != 0)
		{
			return false;
		}
		i++;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	memset(a,0,n * sizeof(int));
	for(int i = 1;i <= n;i++)
	{
		for(int j = 0;j < i;j++)
		{
			a[j]++;
		}
		if(isright(a,n))
		{
			cout << i << endl;
		}
	}
	return 0;
}
