#include <iostream>
using namespace std;
int main()
{
	long int P;
	cin >> P;
	if(P % 5 == 0 || P % 2 == 0)
	{
		cerr << " The number is error!" << endl;
		return 0;
	}
	long int a = 1;
	int num = 0;
	while(true)
	{
		num ++;
		if(a % P == 0)
			break;
		a = a*10 + 1;
	}
	cout << a / P << " " << num << endl;
	return 0;
}
