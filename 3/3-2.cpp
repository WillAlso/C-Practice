#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int page;
	cin >> page;
	int t = 0;
	int count[10];
	memset(count,0,sizeof(int) * 10);
	for(int i = 1;i <= page;i++)
	{
		t = i;
		while(t != 0)
		{
			count[t % 10] ++;
			t /= 10;
		}
	}
	for(int i = 0;i < 10;i++)
		cout << i << " " << count[i] << endl;
	return 0;
}
