#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,x0,x1;
	cin >> a;
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	while(fabs(x1 - x0) > 0.000001)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	cout << x1 << endl;
	return 0;
}
