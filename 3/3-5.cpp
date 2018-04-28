#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i = 0;i < 10;i++)
    {
	a[i] = i;
	cout << a[i] << " ";
    }
    cout << endl;
    int j,t;
    for(int i = 0;i < 10 / 2;i++)
    {
	j = 9 - i;
	t = a[i];
	a[i] = a[j];
	a[j] = t;
    }
    for(int i = 0;i < 10;i++)
    {
	cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
