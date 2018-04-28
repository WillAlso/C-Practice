#include <iostream>
using namespace std;
int main()
{
	//可以使用吉木拉尔森计算公式
	//W = (d + 2*m +3*(m+1)/5+y+y/4-y/100+y/400)mod7;
	//一月二月为上一年13 14月.
	int y,m,d;
	cin >> y >> m >> d;
	int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int lunar = 0;
	lunar = (y - 1) /4 - (y - 1) / 100 + y / 400;
	int sum = (y - 1 + lunar) % 7;
	if((y / 4 == 0 && y / 100 != 0) || (y /400) == 0)
	{
		month[2]++;
	}
	int sum_day = 0;
	for(int i = 0;i < m;i++)
	{
		sum += month[i];
	}
	sum_day += d;
	int week = (sum + sum_day) % 7;
	string week_name[] = {"日","一","二","三","四","五","六"};
	cout << "星期" << week_name[week] << endl;
	return 0;
}
