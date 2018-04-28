#include <iostream>
using namespace std;
int main()
{
	//zhang = 1;Li = 2;Wang = 3
	int choice;
	int m[] = {0,0,0,0};
	cin >> choice;
	while(choice != -1)
	{
		m[choice]++;
		cin >> choice;
	}
	cout << "Zhang = " << m[1] << endl;
	cout << "Li    = " << m[2] << endl;
	cout << "Wang  = " << m[3] << endl;
	return 0;
}
