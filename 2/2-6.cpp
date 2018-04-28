#include <iostream>
using namespace std;
int main()
{
	int t,max;
	cin >> t;
	max = t;
	for(int i = 1;i < 10;i++)
	{
		cin >> t;
		if(t > max)
			max = t;
	}
	cout << max << endl;
	return 0;
}
