#include <iostream>
using namespace std;
int main()
{	
	string color;
	cin >> color;
	int blue = 0;
	int white = 0;
	int red = color.length() - 1;
	int t,cnt = 0;
	while(color[blue] == 'b')
	{
		blue++;
		white++;
	}
	while(color[white] == 'w')
	{
		white++;
	}
	while(color[red] == 'r')
	{
		red--;
	}
	while(white <= red)
	{
		if(color[white] == 'b')
		{
			if(blue != white)
			{
				t = color[blue];
				color[blue] = color[white];
				color[white] = t;
				cnt++;
			}
			blue++;
			white++;
		}else if(color[white] == 'w')
		{
			white++;
		}else
		{
			if(white != red)
			{
				t = color[white];
				color[white] = color[red];
				color[red] = t;
				red--;
				cnt++;
				while(color[red] == 'r')
				{
					red--;
				}
			}
		}
	}
	cout << "Used " << cnt << " times." << endl;
	cout << color << endl;
	return 0;
}
