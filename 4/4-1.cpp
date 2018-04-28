#include <iostream>
using namespace std;
bool prime(int);
bool plain(int);
int main()
{
	for(int i = 2;i < 100000;i++)
	{
		if(prime(i) && plain(i))
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
bool prime(int n)
{
	for(int i = 2;i < n;i++)
		if(n % i == 0)
			return false;
	return true;
}
bool plain(int n)
{
	int a = n;
	int b = 0;
	while(a > 0)
	{
		b = b * 10 + a % 10;
		a /= 10;
	}
	return b == n;
}
