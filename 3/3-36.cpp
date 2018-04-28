#include <iostream>
#include <iomanip>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	SqList la;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> la.data[i]; 
	}
	la.length = n;
	for(int i = 0;i < n;i++)
	{
		if(la.data[i] < 0)
		{
			for(int j = i;j < la.length - 1;j++)
			{
				la.data[i] = la.data[i + 1];
			}
			la.length--;
		}
	}
	for(int i = 0;i < la.length;i++)
	{
		cout << setw(4) << la.data[i];
	}
	cout << endl;
	return 0;
}
