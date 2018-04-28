#include <iostream>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	int i,j,n;
	cin >> n;
	SqList la,lb;
	la.length = n;
	for(i = 0;i < n;i++)
	{
		cin >> la.data[i];
	}
	cin >> n;
	lb.length = n;
	for(i = 0;i < n;i++)
	{
		cin >> lb.data[i];
	}
	int a,b;
	a = 0;
	b = 0;
	SqList lc;
	int cnt = 0;
	while(a < la.length && b < lb.length)
	{
		if(la.data[a] < lb.data[b])
		{
			a++;
		}else if(la.data[a] == lb.data[b])
		{
			lc.data[cnt++] = lb.data[b++];
			a++;
		}else
		{
			b++;
		}
	}
	lc.length = cnt;
	for(int m = 0;m < lc.length;m++)
	{
		cout << lc.data[m] << " ";
	}
	cout << endl;
	return 0;
}
