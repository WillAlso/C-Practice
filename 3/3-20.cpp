#include <iostream>
using namespace std;
int main()
{
	int N,K;
	cin >> N >> K;
	int *len = new int[N];
	int mid,min,max;
	min = max = 0;
	for(int i = 0;i < N;i++)
	{
		cin >> len[i];
		if(max < len[i])
		{
			max = len[i];
		}
	}
	max += 1;
	int t;
	while(min + 1 < max)
	{
		mid = (min + max) / 2;
		t = 0;
		for(int i = 0;i < N;i++)
		{
			if(t >= K)
			{
				break;
			}
			t += len[i] / mid;
		}
		if(t >= K)
		{
			min = mid;
		}
		else
		{
			max = mid;
		}
	}
	cout << min << endl;
	return 0;
}
