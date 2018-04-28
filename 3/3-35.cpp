#include <iostream>
#include <iomanip>
using namespace std;
struct SqList{
	int data[100];
	int length;
};
int main()
{
	int i,n;
	SqList la = {{10,20,30,40,50,60,70,80,90,100},10};
	for(i = 0;i < la.length;i++)
	{
		cout << setw(4) << la.data[i];
	}
	cout << endl;
	if(la.length >= 100)
	{
		cout << "The list is full!" << endl;
		return 1;
	}
	cin >> n;
	int pos = 0;
	while(la.data[pos] < n)
	{
		pos++;
	}
	for(i = la.length;i > pos;i--)
	{
		la.data[i] = la.data[i - 1];
	}
	la.data[pos] = n;
	la.length++;
	for(i = 0;i < la.length;i++)
	{
		cout << setw(4) << la.data[i];
	}
	cout << endl;
	return 0;
}
