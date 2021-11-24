#include<stdio.h>
#include<string.h>

#define FALSE 0
#define TRUE  1

int revert(int num)
{
	int temp = 0;
	int revert_num = 0;
	int first_flag = TRUE;

	while (num != 0)
	{
		temp = num % 10;

		if (first_flag == TRUE)
			first_flag = FALSE;
		else
			revert_num *= 10;

		revert_num += temp;
		num /= 10;
	}

	return revert_num;
}

int main()
{
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);

	a=revert(a);
	b=revert(b);

	if (a >= b)
		printf("%d", a);
	else
		printf("%d", b);
}
