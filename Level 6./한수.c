#include <stdio.h>
#include <stdbool.h>


bool suyeol(int n)
{
	int i = 0, temp = 0, cnt = 0, minus = 0;
		
	while (n != 0)
	{
		i = n % 10;
		n /= 10;
		if (cnt == 0)
		{
			temp = i;
			cnt++;
			continue;
		}
		else if (cnt == 1)
		{
			minus = temp - i;
			temp = i;
			cnt++;
			continue;
		}

		if ((temp - i) == minus)
		{
			continue;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int ret = 0;
	int N = 0;
	int cnt = 0;
	scanf("%d", &N);
	cnt = N;
	if (N > 99)
	{ 
		cnt = 99;
		for (int i = 100; i <= N; i++)
		{
			if ((ret = suyeol(i)) == true)
			{
				cnt++;
			}
		}
	}
	printf("%d",cnt);
}
