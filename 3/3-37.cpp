#include <iostream>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	int n;
	SqList la;
	cin >> n;
	for(int j = 0;j < n;j++)
	{
		cin >> la.data[j];
	}
	la.length = n;
	int i,k;
	cout << "input i k:" << endl;
	cin >> i >> k;
	int j = i - 1;
	int cnt = 0;
	while(cnt < k)
	{
		la.data[j] = la.data[j + k];
		cnt++;
		j++;
	}
	la.length -= k;
	for(int j = 0;j < la.length;j++)
	{
		cout << la.data[j] << " ";
	}
	cout << endl;
	return 0;
}
