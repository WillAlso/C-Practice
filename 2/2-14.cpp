#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for(int m =100;m <= 200;m++)
	{
		int limit = sqrt(m);
		bool is_prime = true;
		for(int i = 2;i < limit;i++)
		{
			if(m % i == 0)
			{
				is_prime = false;
				break;	
			}
		}
		if(is_prime)
			cout << m << " ";
	}
	cout << endl;
	return 0;
}
