#include <iostream>
using namespace std;
int Value(int);
int main()
{
	int n;
	cin >> n;
	cout << Value(n) << endl;
	return 0;
}
int Value(int n)
{
	if(n == 1)
	{
		return 1;
	}else if(n == 2)
	{
		return 2;
	}else if(n == 3)
	{
		return 4;
	}else
		return (Value(n-1) + Value(n-2) + Value(n-3));
}
