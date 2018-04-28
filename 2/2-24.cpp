#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << a << "/" << b << " = ";
    int c;
    do
    {
	c = b / a + 1;
	cout << "1/" << c << " + ";
	a = a * c - b;
	b = b * c;
    }while(b % a != 0);
    cout << "1/" << b / a << endl;
    return 0;
}
