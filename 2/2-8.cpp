#include <iostream>
using namespace std;
int main()
{
	int m;
	cin >> m;
	bool flag = false;
	while(m != 0)
	{
		int d = m % 10;
		m /= 10;
		if(d == 0)
		{
			if(flag)
				cout << d;
		}else
			cout << d;	
		flag = true;
	}
	cout << endl;
	return 0;
}
