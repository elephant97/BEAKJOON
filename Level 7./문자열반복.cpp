#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cnt = 0, i = 0, repeat_cnt = 0, x = 0, y = 0;
	string str;
	
	
	cin >> cnt;
	for (i = 0; i < cnt; i++)
	{
		cin >> repeat_cnt;
		cin >> str;

		for (x = 0; x < str.length(); x++)
		{
			for (y = 0; y < repeat_cnt; y++)
			{
				cout << str[x];
			}
		}
		cout << "\n";
	}
}
