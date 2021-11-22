#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000000+1] = { 0, };
	int max = 0, max_temp = -1, x = 0, y = 0, length = 0, flag = 0;
	char max_char = '\0';
	
	scanf("%s", str);
	length = strlen(str);
	
	if (length == 1)
	{
		if (str[0] >= 97 && str[0] <= 122) str[0] = str[0] - (char)32;
		printf("%c",str[0]);
		return 0;
	}

	for (x = 0; x < length - 1; x++)
	{
		if (str[x] == '0')	continue;
		
		for (y = 1; y < length; y++)
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
			printf("%d", flag);
		}
		else if (max_temp == max)
		{
			flag = 1;
			printf("%c", str[x]);
			printf("%d", max);
		}
		max = 0;
	}

	if (flag == 1) printf("?");
	else
	{
		if (max_char >= 97 && max_char <= 122) max_char = max_char - (char)32;
		printf("%c", max_char);
	}
	 
		

}
