#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a[10],sum,avg;
	int n;
	cin >> n;
	sum = 0;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	avg = sum / n;
	int pos = 0;
	int max = 0;
	for(int i = 0;i < n;i++)
	{
		if(max < abs(a[i] - avg))
		{
			max = abs(a[i] - avg);
			pos = i;
		}
	}
	sum -= a[i];
	avg = sum / (n - 1);
	cout << avg << endl;
	return 0;
}
