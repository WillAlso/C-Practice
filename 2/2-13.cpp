#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	for(i = 2;i <= 10000;i++)
	{
		int sum = 0;
		for(int m = 1;m < i;m++)
		{
			if(i % m == 0)
			{
				sum += m;
			}
		}
		if(sum == i)
			cout << i << endl;
	}
	return 0;
}
