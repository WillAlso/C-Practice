#include <iostream>
using namespace std;
int main()
{
	int d1,d2,temp,cnt;
	d1 = 16;
	cnt = 0;
	d2 = d1;
	while(cnt <= 4)
	{
		if(d2 % 4 != 0)
		{
			cnt = 0;
			d1 += 20;
			d2 = d1;
		}
		temp = (d2 / 4) * 5 + 1;
		cnt++;
		d2 = temp;
	}
	cout << d2 << endl;
	return 0;
}
