#include <stdio.h>
#include <string.h>

int main()
{
    int in_cnt = 0, person_cnt = 0, i = 0, x = 0, up_cnt = 0;
    double avg = 0.00;
    int* score = NULL;
    double percent_upscore = 0;

    scanf("%d", &in_cnt);

    for (i = 0; i < in_cnt; i++)
    {
        avg = 0;
        scanf("%d", &person_cnt);
        score = (int *)malloc(sizeof(int) * person_cnt);
        memset(score, 0, sizeof(int) * person_cnt);
        for (x = 0; x < person_cnt; x++)
        {
            scanf("%d", &score[x]);
            avg += (double)score[x];
        }

        up_cnt = 0;
        avg /= person_cnt;
        for (x = 0; x < person_cnt; x++)
        {
            if (score[x] > avg)
            {
                up_cnt++;
            }
        }

        percent_upscore = (double)up_cnt / person_cnt * 100;
        printf("%.3f%%\n", percent_upscore);
        free(score);
    }
}
