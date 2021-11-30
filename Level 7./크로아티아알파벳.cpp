#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	char croatia[8][3 + 1] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string str;
	int i = 0, x = 0, cro_lenth = 0, cnt = 0;

	cin >> str;
	while(i < str.length())
	{
		cro_lenth = (int)strlen(croatia[x]);
		if (x > 7 || i == str.length() - 1)
		{
			i++;
			cnt++;
		}
		else if (!strncmp(&str[i], croatia[x], cro_lenth))
		{
			cnt++;
			i += cro_lenth;
			
		}
		else
		{
			x++;
			continue;
		}

		x = 0;
	}

	cout << cnt;
}
