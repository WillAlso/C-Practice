#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N,a,m;
    cin >> N >> a >> m;
    //N the station number
    //a the upstair number first
    //m the remainder numberi finally
    int up_num[51],down_num[51],sum_num[51];
    up_num[0] = down_num[0] = sum_num[0] = 0;
    up_num[1] = a;
    down_num[1] = 0;
    sum_num[1] = sum_num[2] = a;
    for(int i = 0;i < m;i++)
    {
	up_num[2] = i;
	down_num[2] = i;
	for(int j = 3;j < N;j++)
	{
	    up_num[j] = up_num[j - 1] + up_num[j - 2];
	    down_num[j] = up_num[j - 1];
	    sum_num[j] = sum_num[j - 1] + up_num[j] - down_num[j];
	}
	if(sum_num[N - 1] == m)
	{
	    cout << "  up: ";
	    for(int i = 1;i < N;i++)
	    	cout << setw(4) << up_num[i];
	    cout << endl << "down: ";
	    for(int i = 1;i < N;i++)
	    	cout << setw(4) << down_num[i];
	    cout << endl << " sum: ";
	    for(int i = 1;i < N;i++)
	    	cout << setw(4) << sum_num[i];
	    cout << endl;
	    break;
	}
    }
    return 0;
}
