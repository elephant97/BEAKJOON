#include<stdio.h>
#include<string.h>

int main()
{
	char str[15] = { 0, };
	int i = 0;
	int result = 0;

	scanf("%s",str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'C')
			result += 3;
		else if (str[i] >= 'D' && str[i] <= 'F')
			result += 4;
		else if (str[i] >= 'G' && str[i] <= 'I')
			result += 5;
		else if (str[i] >= 'J' && str[i] <= 'L')
			result += 6;
		else if (str[i] >= 'M' && str[i] <= 'O')
			result += 7;
		else if (str[i] >= 'P' && str[i] <= 'S')
			result += 8;
		else if (str[i] >= 'T' && str[i] <= 'V')
			result += 9;
		else if (str[i] >= 'W' && str[i] <= 'Z')
			result += 10;
	}

	printf("%d",result);
}
