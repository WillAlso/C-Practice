#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z;
	for(int i = 100;i < 1000;i++)
	{
		x = i / 100;
		y = i / 10 % 10;
		z = i % 10;
		if(pow(x,3) + pow(y,3) + pow(z,3) == i)
			cout << i << endl;
	}
	return 0;
}
