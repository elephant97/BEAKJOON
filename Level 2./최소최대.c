#include<stdio.h>
#include<string.h>

int main()
{
    int cnt = 0, max = 0, min = 0;
    int* arr = 0;
    int i = 0, j = 0;

    scanf("%d", &cnt);
    arr = (int*)malloc(sizeof(int) * cnt);
    memset(arr, 0, sizeof(int) * cnt);

    for (i = 0; i < cnt; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < cnt; i++)
    {
        min = (min > arr[i]) ? arr[i] : min;
        max = (max < arr[i]) ? arr[i] : max;
    }

    printf("%d %d", min, max);
}
