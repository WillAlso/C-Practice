#include <iostream>
using namespace std;
int main()
{
	int cnt = 0;
	int five,two;
	five = 100 / 5;
	for(;five >= 0;five --)
	{
		for(two = (100 - 5 * five) / 2;two >= 0;two --)
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
