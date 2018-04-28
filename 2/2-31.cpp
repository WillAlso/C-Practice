#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,m1,m2,m3,m4,m5,m6;
    for(a = 0;a <= 1;a++)
	for(b = 0;b <= 1;b++)
	    for(c = 0;c <= 1;c++)
		for(d = 0;d <= 1;d++)
		    for(e = 0;e <= 1;e++)
			for(f = 0;f <= 1;f++)
			{
			    m1 = a || b;
			    m2 = !(a && b);
			    m3 = (a && e) || (a && f) || (e && f) || (a && e && f);
			    m4 = (b && c) || (!b && !c);
			    m5 = (c && !d) || (!c && d);
			    m6 = d || (!d && e);
			    if(m1 + m2 + m3 + m4 + m5 + m6 == 6)
				cout << a << b << c << d << e << f << endl;
			}
    return 0;
}
