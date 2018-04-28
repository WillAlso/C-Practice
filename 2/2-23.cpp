#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    if(n < 0)
    {
	cerr << "The input format is wrong!" << endl;
	return 0;
    }
    if(n == 0)
    {
	return 0;
    }
    while(n != 1)
    {
	if(n % 2 == 0)
	{
	    cout << n << " / 2 = " << n / 2 << endl;
	    n /= 2;
	}else
	{
	    cout << n << " * 3 + 1 = " << n * 3 + 1 << endl;
	    n = n * 3 + 1;
	}
    }
    return 0;
}
