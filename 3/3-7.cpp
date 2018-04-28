#include <iostream>
using namespace std;
void reverse(int a[],int m,int n);
int main()
{
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int n;
	cin >> n;
	reverse(a,0,9);
	for(int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	reverse(a,0,9 - n);
	for(int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	reverse(a,9 - n + 1,9);
	for(int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
void reverse(int a[],int m,int n)
{
	int t;
	while(m < n)
	{
		t = a[m];
		a[m] = a[n];
		a[n] = t;
		m++;
		n--;
	}
}
