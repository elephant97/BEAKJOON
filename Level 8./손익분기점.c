#include<stdio.h>

int main()
{
	long long A = 0, B = 0, C = 0, variable_cost = 0, sales_cost = 0;
	int i = 1;
	scanf("%llu %llu %llu",&A ,&B ,&C);

	if (B >= C)
	{
		printf("-1");
		return 0;
	}


	printf("%llu" ,A/(C-B)+1);

}
