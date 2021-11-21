#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0, i;
	char* str = NULL;
	int sum = 0;

	scanf("%d", &a);
	str = (char*)malloc(sizeof(char)*a);
	memset(str, 0x00, sizeof(char) * a);
	scanf("%s", str);
	for (i = 0; i < a; i++)
	{
		sum += str[i] - '0';
	}

	printf("%d", sum);
}
