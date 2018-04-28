#include <iostream>
using namespace std;
int main()
{
	int x,y;
	for(int i = 1000;i < 10000;i++)
	{
		x = i % 100;
		y = i / 100;
		if((x + y) * (x + y) == i)
			cout << i << endl;
	}
	return 0;
}
