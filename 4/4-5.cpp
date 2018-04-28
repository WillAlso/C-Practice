#include <iostream>
#include <iomanip>
using namespace std;
void print(int a,int bv,int cv)
{	
	int cnt,b,c,t;
	cnt = 0;
	b = c = 0;
	t = a / 2;
	while(!(a == t || b == t || c == t))
	{
		if(b == 0)
		{
			if(a < bv)
			{
				return;
			}else
			{
				a -= bv;
				b = bv;
				cout << setw(4) << a << setw(4) << b << setw(4) << c << endl;;
			}
		}else if(c == cv)
		{
			a += cv;
			c = 0;
				cout << setw(4) << a << setw(4) << b << setw(4) << c << endl;
		}else if(b > cv - c)
		{
			b -= (cv - c);
			c = cv;
				cout << setw(4) << a << setw(4) << b << setw(4) << c << endl;
		}else
		{
			c += b;
			b = 0;
				cout << setw(4) << a << setw(4) << b << setw(4) << c << endl;
		}
		cnt++;
	}
}
int posong(int a,int bv,int cv)
{
	int cnt,b,c,t;
	cnt = 0;
	b = c = 0;
	t = a / 2;
	while(!(a == t || b == t || c == t))
	{
		if(b == 0)
		{
			if(a < bv)
			{
				return -1;
			}else
			{
				a -= bv;
				b = bv;
			}
		}else if(c == cv)
		{
			a += cv;
			c = 0;
		}else if(b > cv - c)
		{
			b -= (cv - c);
			c = cv;
		}else
		{
			c += b;
			b = 0;
		}
		cnt++;
	}
	return cnt;
}
int main()
{
	int a;
	cout << "酒的总量:";
	cin >> a;
	int bv,cv;
	cout << "输入b,c的容量:";
	cin >> bv >> cv;
	cout << setw(4) << "a" << setw(4) << "b" << setw(4) << "c" << endl;
	print(a,bv,cv);
	return 0;
}
