#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,area;
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c > a)
	{
		double t = (a + b + c) / 2;
		area = sqrt(t * (t - a) * (t - b) * (t - c));
		cout << "Area:" << area << endl;
	}
	else
	{
		cout << "This is not a triangle!" << endl;
	}
	return 0;
}
