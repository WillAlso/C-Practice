#include <iostream>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long sum = 0;
	cout << n * n * n << " = ";
	long limit = n * n * n;
	for(long i = 1;i <= limit;i += 2)
	{
		sum = 0;
		for(long j = i;j <= limit;j += 2)
		{
			sum += j;
			if(sum == limit)
			{
				for(long t = i;t < j;t += 2)
					cout << t << " + ";
				cout << j << endl;
				return 0;
			}
			if(sum > limit)
				break;
		}
	}
	return 0;
}
