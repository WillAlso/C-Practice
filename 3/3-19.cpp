#include <iostream>
using namespace std;
int main()
{
	int n,i,max,sum,len,pos;
	cin >> n;
	int *a;
	a = new int[n];
	for(i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	max = sum = pos = 0;
	for(i = 0;i < n;i++)
	{
		if(sum + a[i] > max)
		{
			max = sum + a[i];
			len = i - pos + 1;
		}else if(sum + a[i] == max && i - pos > len)
		{
			len = i - pos;
		}
		if(sum + a[i] < 0)
		{
			pos = i;
			sum = 0;
		}else
		{
			sum = sum + a[i];
		}
	}
	cout << max << " " << len << endl;
	return 0;
}
