#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int begin,end,mid,n;
	cin >> n;
	begin = 0;
	end = 9;
	while(begin <= end)
	{
		mid = (begin + end) / 2;
		if(a[mid] == n)
		{
			break;
		}else if(n < a[mid])
		{
			end = mid - 1;
		}else
		{
			begin = mid + 1;
		}
	}
	if(begin <= end)
	{
		cout << "the " << mid + 1 << endl;
	}
	else
	{
		cout << "No found!" << endl;
	}
	return 0;
}
