#include <iostream>
using namespace std;
int parse(int a[])
{
	int result = 0;
	int preor = a[0];
	int preend = 1;
	int i;
	for(i = 1;i <=17 ;i += 2)
	{
		switch(a[i])
		{
			case 0:
				preor = preor * 10 + a[i + 1];
				break;
			case 1:
			case 2:
				if(preend == 1)
				{
					result = result + preor;
				}else
				{
					result = result - preor;
				}
				preor = a[i + 1];
				preend = a[i];
		}
	}
	//preor = preor * 10 + a[19];
	preor = 10;
	if(preend == 1)
	{
		result += preor;
	}else
	{
		result -= preor;
	}
	if(result == 100)
		cout << preor << " ";
	return result;

}
int main()
{
	int a[20];
	int cnt = 1;
	for(int i = 0;i < 20;i++)
	{
		if(i % 2 != 0)
		{
			a[i] = 0;
		}else
		{
			a[i] = cnt++;
		}
	}
	a[18] = 1;
	a[19] = 0;
	int count = 0;
	int a1,a2,a3,a4,a5,a6,a7,a8,a9;
	char b[3] = {' ','+','-'};
	for(a1 = 0;a1 < 3;a1++)
	{
		for(a2 = 0;a2 < 3;a2++)
		{
			for(a3 = 0;a3 < 3;a3++)
			{
				for(a4 = 0;a4 < 3;a4++)
				{
					for(a5 = 0;a5 < 3;a5++)
					{
						for(a6 = 0;a6 < 3;a6++)
						{
							for(a7 = 0;a7 < 3;a7++)
							{
								for(a8 = 0;a8 < 3;a8++)
								{
									for(a9 = 0;a9 < 3;a9++)
									{
										a[1] = a1;a[3] = a2;a[5] = a3;
										a[7] = a4;a[9] = a5;a[11] = a6;
										a[13] = a7;a[15] = a8;a[17] = a9;
										if(parse(a) == 100)
										{
										    count++;
										    for(int j = 0;j < 18;j++)
										    {
										    if(j % 2 == 0)
										    {
										    cout << a[j];
										    }else
										    {
										    if(b[a[j]] != ' ')
										    cout << b[a[j]];
										    }
										    }
										    cout << "10=100" << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
