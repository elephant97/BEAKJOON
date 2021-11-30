#include<stdio.h>
#include<string.h>

int main()
{
	char croatia[8][3 + 1] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	char str[100 + 1] = { 0, };
	int i = 0, x = 0, cro_lenth = 0, cnt = 0, str_lenth = 0;

	scanf("%s", str);
	str_lenth = strlen(str);
	while(i < str_lenth)
	{
		cro_lenth = strlen(croatia[x]);
		if (x > 7 || i == str_lenth - 1)
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

	printf("%d", cnt);
}
