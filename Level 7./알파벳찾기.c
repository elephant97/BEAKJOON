#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i = 0, x = 0;

	scanf("%s", str);
	for (i = 97; i < 123; i++)
	{
		x = 0;
		while (x < strlen(str))
		{
			if (str[x] == (char)i)
			{
				break;
			}

			x++;
		}

		if (str[x] == (char)i)	printf("%d ", x);
		else	printf("-1 ");
		
	}
}
