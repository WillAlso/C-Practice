#include <iostream>
using namespace std;
typedef struct{
	int x;
	int y;
}point;
int main()
{
	int n,m;
	cin >> n >> m;
	point a[51][51];
	for(int i = 0;i < 51;i++)
	{
		for(int j = 0;j < 51;j++)
			a[i][j].x = a[i][j].y = 0;
	}
	int dx[] = {0,2,2,1,1};
	int dy[] = {0,1,-1,2,-2};
	a[n][m].x = a[n][m].y = -1;
	for(int i = n;i >= 2;i--)
		for(int j = 1;j <= m;j++)
			if(a[i][j].x != 0)
				for(int k = 1;k <= 4;k++)
				{
					int t1 = i - dx[k];
					int t2 = j - dy[k];
					if(t1 >= 0 && t2 >= 0 && t1 <51 && t2 < 51)
					{
						a[t1][t2].x = i;
						a[t1][t2].y = j;
					}
				}
	if(a[1][1].x == 0 || a[1][1].y == 0)
		cout << "No" << endl;
	else
	{
		int i = 1;
		int j = 1;
		cout << "(" << i << "," << j << ")" << endl;
		while(a[i][j].x != -1)
		{
			int t = i;
			i = a[i][j].x;
			j = a[t][j].y;
			cout << "(" << i << "," << j << ")" << endl;
		}
	}
	return 0;
}
