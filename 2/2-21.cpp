#include <iostream>
using namespace std;
int main()
{
	double dis[50],oil[50];
	int n;
	dis[0] = 0,oil[0] = 0;
	dis[1] = 500,oil[1] = 500;
	for(n = 2;dis[n-1] < 1000;n++)
	{
		oil[n] = n * 500;
		dis[n] = dis[n-1] + 500.0/(2*n - 1);
	}
	double t = 1000 - dis[n-2];
	oil[n-1] = oil[n-2] + t;
	dis[n-1] = 1000;
	for(int i = n - 1;i >= 0;i--)
	{
		cout << 1000 - dis[i] << "\t" << oil[i] << endl;
	}
	return 0;
}
