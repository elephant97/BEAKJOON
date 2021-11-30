#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;
	int i = 0, x = 0, y = 0, word_cnt = 0, cnt = 0, seq_flag = 0, seq = 0;

	cin >> word_cnt;
	for(i = 0; i < word_cnt; i++)
	{
		cin >> str;
		seq_flag = 0;
		for (x = 0; x < str.length() - 1; x++)
		{
			seq = x;
			for (y = x+1; y < str.length(); y++)
			{
				if (str[x] == str[y])
				{
					if ((y - seq) == 1) //연속되었는지 체크
					{
						seq = y;
						seq_flag = 1;
					}
					else
					{
						seq_flag = -1;
						break;//하나라도 연속되지 않으면 더이상 체크 할 필요 없음
					}	
				}
			}
			if (seq_flag == -1 )	break; //하나라도 연속되지 않으면 더이상 체크 할 필요 없음
		}
		if (seq_flag != -1)	cnt++;//하나라도 연속되지 않으면 그룹단어X
	}	
	cout << cnt;
}
