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
	for(i = 0;i < la.length;i++)
	{
		for(j = i + 1;j < la.length;j++)
		{
			if(la.data[i] == la.data[j])
			{
				for(int m = j;m < la.length;m++)
				{
					la.data[m] = la.data[m + 1];
				}
				la.length--;
			}
		}
	}
	for(i = 0;i < la.length;i++)
	{
		cout << la.data[i] << " ";
	}
	cout << endl;
	return 0;
}
