#include<stdio.h>
#include<string.h>

int main()
{
	char str[100 + 1] = { 0, };
	int i = 0, x = 0, y = 0, word_cnt = 0, cnt = 0, seq_flag = 0, seq = 0;

	scanf("%d", &word_cnt);
	for(i = 0; i < word_cnt; i++)
	{
		memset(str, 0x00, sizeof(str));
		scanf("%s", str);
		seq_flag = 0;
		for (x = 0; x < strlen(str) - 1; x++)
		{
			seq = x;
			for (y = x+1; y < strlen(str); y++)
			{
				if (str[x] == str[y])
				{
					if ((y - seq) == 1)
					{
						seq = y;
						seq_flag = 1;
					}
					else
					{
						seq_flag = -1;
						break;
					}	
				}
			}
			if (seq_flag == -1 )	break;
		}
		if (seq_flag != -1)	cnt++;
	}	
	printf("%d", cnt);
}
