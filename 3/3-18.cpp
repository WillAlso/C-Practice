#include <iostream>
using namespace std;
int main()
{
	int a[4][4] = {{1,4,8,9},{2,5,10,13},{3,6,11,15},{7,12,14,18}};
	bool flag = false;
	int t,row,col;
	cin >> t;
	row = 0;
	col = 3;
	while(row < 4 && col >= 0)
	{
		if(a[row][col] == t)
		{
			flag = true;
			break;
		}else if(a[row][col] > t)
		{
			col--;
		}else
		{
			row++;
		}
	}
	if(flag)
	{
		cout << "a[" << row << "][" << col << "]" << endl;
	}else
	{
		cout << "No found!" << endl;
	}
	return 0;
}
