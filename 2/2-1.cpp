#include <iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin >> a >> b >> c;
	max = (a > b ? a:b);
	max = (max > c ? a:c);
	cout << max << endl;
	return 0;
}
