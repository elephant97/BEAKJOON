#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	int i = 0, x = 0;

	cin >> str;
	for (i = 97; i < 123; i++)
	{
		x = 0;
		while (x < str.length())
		{
			if (str[x] == (char)i)
			{
				break;
			}

			x++;
		}

		if (str[x] == (char)i)	cout << x << " ";
		else	cout << -1 << " ";
		
	}

}
