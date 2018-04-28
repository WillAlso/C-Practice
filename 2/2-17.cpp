#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int count = 0;
	int t;
	for(int i = 5;i <= n;i += 5)
	{
		t = i;
		while(t % 5 == 0)
		{
			++ count;
			t /= 5;
		}
	}
	cout << count << endl;
	return 0;
}
