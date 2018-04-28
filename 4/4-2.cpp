#include <iostream>
using namespace std;
int fun(int num,int b)
{
	int result,bit[10];
	int cnt = 0;
	result = 0;
	while(num != 0)
	{
		bit[cnt++] = num % 10;
		num /= 10;
	}
	cnt--;
	while(cnt >= 0)
	{
		if(bit[cnt] >= b)
		{
			return -1;
		}
		result = result * b + bit[cnt--];
	}
	return result;
}
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int n;
	for(n = 2;n <= 16;n++)
	{
		int x = fun(a,n);
		int y = fun(b,n);
		int z = fun(c,n);
		if(x == -1 || y == -1 || z == -1)
		{
			continue;
		}
		if(x * y == z)
		{
			cout << n << endl;
			break;
		}
	}
	if(n == 17)
	{
		cout << "None!" << endl;
	}
	return 0;
}
