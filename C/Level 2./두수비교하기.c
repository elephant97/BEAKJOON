#include <stdio.h>

int main()
{
    int A = 0, B = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A > B)
    {
        printf(">");
    }
    else if (A < B)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
}
