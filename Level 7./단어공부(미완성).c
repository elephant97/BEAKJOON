#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000000 + 1] = { 0, };
	int max = 0, max_temp = -1, x = 0, y = 0, length = 0, flag = 0;
	char max_char = '\0';

	scanf("%s", str);
	length = strlen(str);

	if (length == 1)
	{
		max_temp = 0;
		max_char = str[0];
	}

	for (x = 0; x < length - 1; x++)
	{
		if (str[x] == '0')	continue;

		for (y = x + 1; y < length; y++)
		{
			if (str[x] == str[y] || str[x] == str[y] - (char)32 || str[x] == str[y] + (char)32)
			{
				str[y] = '0';
				max++;
			}
		}

		if (max != 0 && max_temp < max)
		{
			max_char = str[x];
			max_temp = max;
			flag = 0;
		}
		else if (max_temp == max)
		{
			flag = 1;
		}
		max = 0;
	}

	if (flag == 1 || max_temp == (-1)) printf("?\n");
	else
	{
		if (max_char >= 97 && max_char <= 122) max_char = max_char - (char)32;
		printf("%c\n", max_char);
	}
}
