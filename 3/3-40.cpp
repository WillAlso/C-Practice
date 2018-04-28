#include <iostream>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	int i,j,t,n;
	cin >> n;
	SqList la;
	for(i = 0;i < n;i++)
	{
		cin >> la.data[i];
	}
	la.length = n;
	cin >> t;
	i = 0;
	j = la.length - 1;
	while(i < j)
	{
		while(i < j && la.data[i] != t)
		{
			i++;
		}
		while(la.data[j] == t)
		{
			j--;
		}
		if(i < j)
		{
			la.data[i++] = la.data[j--];
		}
	}
	la.length = j + 1;
	for(i = 0;i < la.length;i++)
	{
		cout << la.data[i] << " ";
	}
	return 0;
}
