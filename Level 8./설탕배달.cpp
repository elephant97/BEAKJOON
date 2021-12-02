#include<iostream>
using namespace std;

int main()
{
	int gram = 0, temp = 0, i = 0;
	int sugar = 0;
	cin >> gram;


	if ((temp = gram / 5) > 0)
	{
		while (temp >= 0)
		{
			if ((gram - (temp * 5)) % 3 == 0)
			{
				sugar = temp + (gram - (temp * 5)) / 3;
				cout << sugar << "\n";
				break;
			}
			temp--;
		}
		if (temp < 0) sugar = -1;
	}
	else if (gram % 3 == 0)
	{
		sugar = gram / 3;
	}
	else
	{
		sugar = -1;
	}



	cout << sugar;
	return 0;
}
