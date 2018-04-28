#include <iostream>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	SqList la,lb,lc;
	int n;
	cin >> n;
	la.length = n;
	for(int i = 0;i < n;i++)
	{
		cin >> la.data[i];
	}
	int flag = 0;
	while(la.data[flag] <= 0)
	{
		flag++;
	}
	int cnt = 0;
	for(int i = 0;i < la.length;i++)
	{
		if(i < flag)
		{
			lb.data[i] = la.data[i];
		}else
		{
			lc.data[cnt++] = la.data[i];
		}
	}
	lb.length = flag;
	lc.length = la.length - lb.length;
	for(int i = 0;i < lb.length;i++)
	{
		cout << lb.data[i] << " ";
	}
	cout << endl;
	for(int i = 0;i < lc.length;i++)
	{
		cout << lc.data[i] << " ";
	}
	cout << endl;
	return 0;
}
