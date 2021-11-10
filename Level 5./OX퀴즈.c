#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0, i = 0, x = 0, o_cnt = 0;
    char OX_arr[80] = { 0, };
    int* answer = NULL;

    scanf("%d", &cnt);
    answer = (int*)malloc(sizeof(int) * cnt);
    memset(answer, 0, sizeof(int) * cnt);

    for (i = 0; i < cnt; i++)
    {
        o_cnt = 0;
        memset(OX_arr, 0x00, 80);
        scanf("%s", OX_arr);
        for (x = 0; x < strlen(OX_arr); x++)
        {
            if (OX_arr[x] == 'O')
            {
                o_cnt++;
                answer[i] += o_cnt;
            }
            else
            {
                o_cnt = 0;
            }
        }
    }

    for (i = 0; i < cnt; i++)
    {
        printf("%d\n", answer[i]);
    }
}
