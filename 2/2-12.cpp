#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << n << " = ";
	if(n <= 2)
		cout << n;
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
		{
			cout << i << " * ";
			n /= i;
		}
		else
		{
			++i;
		}	
	}
	cout << n << endl;
	return 0;
}
