#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x0,x1,x2;	
	x0 = 0;
	x1 = 2;
	do{
		x2 = (x0 + x1) / 2;
		if((pow(x0,3) - x0 - 1) * (pow(x2,3) - x2 - 1) > 0)
		{
			x0 = x2;
		}else
		{
			x1 = x2;
		}
	}while(fabs(x1 -x0) > 0.00001);
	cout << x1 << endl;
	return 0;
}
