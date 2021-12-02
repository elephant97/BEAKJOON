#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000+1] = { 0, };
    char b[10000+1] = { 0, };
    char temp_str[10000+1] = { 0, };
    char answer[10001 + 1] = { 0, };
    int i = 0, range = 0, temp = 0, a_length = 0, b_length = 0, answer_range = 0;
    scanf("%s %s", a, b);

    a_length = strlen(a) - 1;
    b_length = strlen(b) - 1;

    if (a_length >= b_length)
    {
        range = a_length;
    }
    else
    {
        range = b_length;
        strcpy(temp_str, a);
        memset(a, 0x00, 10000 + 1);
        strcpy(a, b);
        memset(b, 0x00, 10000 + 1);
        strcpy(b, temp_str);
        b_length = a_length;
    }

    for (i = range; i >= 0; i--)
    {
        if (b_length >= 0)
        {
            temp += (int)((a[i] - '0') + (b[b_length] - '0'));
            b_length--;
        }
        else
        {
            temp += (int)(a[i] - '0');
        }

        if (temp > 9)
        {
            answer[answer_range] = (char)(temp % 10) + '0';
            temp /= 10;
            if (0 > i - 1) answer[answer_range + 1] = (char)temp + '0';
        }
        else
        {
            answer[answer_range] = (char)temp + '0';
            temp = 0;
        }
        answer_range++;
    }

    for (i = strlen(answer) - 1; i >= 0; i--)
    {
        printf("%d", (int)(answer[i] - '0'));
    }

}
