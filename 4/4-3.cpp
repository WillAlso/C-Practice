#include <iostream>
#include <memory.h>
using namespace std;
bool huiwen(int num,int t)
{
	int b[10];
	memset(b,0,10 * sizeof(int));
	b[t]++;
	while(num != 0)
	{
		b[num % 10]++;
		num /= 10;
	}
	for(int i = 0;i < 10;i++)
	{
		if(b[i] > 1)
		{
			return true;
		}
	}
	return false;;
}
int fun(int n)
{
	int result = 0;
	while(n != 0)
	{
		result = result * 10 + n % 10;
		n /= 10;
	}
	return result;
}
int main()
{
	int t;
	for(int i = 1000;i < 5000;i++)
	{
		t = fun(i);
		if(t < 1000)
			continue;
		if(t % i == 0)
		{
			int m = t / i;
			if(!huiwen(i,m))
			{
				cout << i << m << endl;
			}
		}
	}
	return 0;
}
