#include <iostream>
using namespace std;
int main()
{
	double a,b,c;
	cin >> a;
	b = a - 3500;
	if(b <= 0)
	{
		c = 0;
	}else if(b < 1500)
	{
		c = b * 0.03;
	}else if(b < 4500)
	{
		c = b * 0.1 - 105;
	}else if(b < 9000)
	{
		c = b * 0.2 - 555;
	}else if(b < 35000)
	{
		c = b * 0.25 - 1005;
	}else if(b < 55000)
	{
		c = b * 0.3 - 2755;
	}else if(b < 80000)
	{
		c = b * 0.3 - 5505;
	}else
	{
		c = b * 0.45 - 13505;
	}
	cout << c << endl;
	return 0;
}
