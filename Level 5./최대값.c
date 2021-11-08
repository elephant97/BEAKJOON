#include<stdio.h>

int main()
{
	int arr[9] = { 0, };
	int max = 0;
	int max_seq = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			max_seq = i+1;
		}
	}

	printf("%d\n%d", max, max_seq);
}
