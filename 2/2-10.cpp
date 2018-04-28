#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int n;
	cin >> n;
	long int line = ceil(sqrt(2*n - 0.25) - 0.5);
	int y = n - line*(line-1)/2;
	int x = line + 1 - y;
	if(line % 2 != 0)
		cout << x << "/" << y << endl;
	else
		cout << y << "/" << x << endl; 
	return 0;
}
