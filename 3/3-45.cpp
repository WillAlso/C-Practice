#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[32];
	for(int i = 0;i < 32;i++)
	{
		a[i] = i * i;
	}
	int cnt = 0;
	for(int i = 10;i < 32;i++)
	{
		long b = 1000 * a[i];
		for(int j = 0;j < 32;j++)
		{
			long c = b + a[j];
			long t = sqrt(c);
			if(t * t == c)
			{
				cnt++;
				cout << c << endl;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
