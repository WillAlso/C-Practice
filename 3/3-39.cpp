#include <iostream>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	int n;
	cin >> n;
	int i,j;
	SqList la;
	for(i = 0;i < n;i++)
	{
		cin >> la.data[i];
	}
	la.length = n;
	for(i = 0;i < la.length - 1;i++)
	{
		if(la.data[i] == la.data[i + 1])
		{
			for(int j = i + 1;j < la.length;j++)
			{
				la.data[j] = la.data[j + 1];
			}
			la.length--;
			i--;
		}
	}
	for(i = 0;i < la.length;i++)
	{
		cout << la.data[i] << " ";
	}
	cout << endl;
	return 0;
}
