#include <iostream>
#include <time.h>
using namespace std;
struct Poker{
    int num;
    char s;
};
int main()
{
    Poker poker[54],temp;
    for(int i = 0;i < 52;i++)
    {
	poker[i].num = i % 13 + 1;
	poker[i].s = i / 13 + 3;
    }
    poker[52].num = 14;
    poker[52].s = poker[53].s = ' ';
    poker[53].num = 15;
    int i,j;
    srand(time(0));
    for(i = 0;i < 54;i++)
    {
	j = rand() % 54;
	temp = poker[i];
	poker[i] = poker[j];
	poker[j] = temp;
    }
    for(i = 0;i < 54;i++)
    {
	cout << i << " " << poker[i].num << " " << poker[i].s << endl;
    }
    return 0;
}
