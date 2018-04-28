#include <iostream>
using namespace std;
int main()
{
	int m,n = 0;
	int child[10];
	cin >> m;
	for(int i = 0;i < 10;i++)
		child[i] = 1;
	int p = 0;
	for(int cnt = 0;cnt < 10;cnt++)
	{
		while(n < m)
		{
			if(child[p % 10] != 0)
			{
				p = (p + 1) % 10;
				n ++;
			}else
				p = (p + 1) % 10;
		}
		n = 0;
		child[(p + 9) % 10] = 0;
		cout << (p + 9) % 10 + 1 << endl;
	}
	return 0;
}
