#include <stdio.h>

int main()
{
    int gram = 0, temp = 0, i = 0;
    int sugar = 0;
    scanf("%d", &gram);
    temp = gram / 5;

    while (temp >= 0)
    {
        if ((gram - (temp * 5)) % 3 == 0)
        {
            sugar = temp + (gram - (temp * 5)) / 3;
            break;
        }
        temp--;
    }
    if (temp < 0) sugar = -1;


    printf("%d", sugar);
    return 0;
}
