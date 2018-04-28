#include <iostream>
using namespace std;
int Value(int);
int main()
{
	int n;
	cin >> n;
	if(n < 0)
	{
		cerr << "The number is error!" << endl;
		return 0;
	}
	cout << Value(n) << endl;
	return 0;
}
int Value(int n)
{
	if(n == 0)
	{
		return 0;
	}else if(n == 1)
	{
		return 3;
	}else if(n == 2)
	{
		return 6;
	}else if(n == 3)
	{
		return 6;
	}else
	{
		return (Value(n -1) + 2 * Value(n - 2));
	}
}
