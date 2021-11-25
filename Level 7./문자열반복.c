#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int cnt = 0, i = 0, repeat_cnt = 0, x = 0, y = 0, str_len = 0, repeat_str_maxlen = 0;
	int z = 0;
	char str[20] = { 0, };
	char* repeat_str = NULL;
	
	scanf("%d", &cnt);
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &repeat_cnt);
		scanf("%s", str);
		str_len = strlen(str);
		repeat_str_maxlen = str_len * repeat_cnt;
		repeat_str = (char*)malloc(sizeof(char) * repeat_str_maxlen + 1);
		memset(repeat_str, 0x00, sizeof(char) * repeat_str_maxlen + 1);
		z = 0;
		for (x = 0; x < str_len; x++)
		{
			for (y = 0; y < repeat_cnt; y++)
			{
				repeat_str[z] = str[x];
				z++;
			}
		}
		printf("%s\n", repeat_str);
		free(repeat_str);
	}
}
