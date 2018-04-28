#include <iostream>
using namespace std;
int main()
{
	int m = 0;
	for(int m = 7;;m += 7)
	{
		if(m % 2 == 1 && m % 3 == 2 && m % 5 == 4 && m % 6 == 5)
		{
			cout << m << endl;
			break;
		}
	}
	return 0;
}
