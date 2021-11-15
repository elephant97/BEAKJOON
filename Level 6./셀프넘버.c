#include <stdio.h>
#include <stdbool.h>

int d(int n)
{
	int i = 0;
	int sum = n;
	while (n != 0)
	{
		i = n % 10;
		n /= 10;
		sum += i;
	}

	return sum;
}

int main()
{
	bool answer[10001] = { false, };
	int ret = 0;
	for (int i = 1; i <= 10000; i++)
	{	
		ret = d(i);
		if(ret <= 10000 && i != ret)
		{
			answer[ret] = true;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (answer[i] == false)
		{
			printf("%d\n",i);
		}
	}
	
}
