#include <iostream>
using namespace std;
int main()
{
	int x,y,z,cnt;
	cnt = 0;
	for(x = 0;x <= 20;x++)
	{
		for(y = 0;y <= (100 - 5 * x) / 3;y++)
		{
			z = 3 * (100 - 5 * x - 3 * y);
			if(x + y + z == 100)
			{
				cout << x << " " << y << " " << z << endl;
				++cnt;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
