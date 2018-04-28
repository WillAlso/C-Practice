#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int light[101];
	memset(light,0,sizeof(int) * 101);
	int num = 100;
	for(int i = 1;i <= 100;i++)
	{
		for(int j = i;j <= 100;j += i)
		{
			++ light[j];
		}
	}
	for(int i = 1;i <= 100;i++)
		if(light[i] % 2 != 0)
			cout << i << " ";
	cout << endl;
	return 0;
}
