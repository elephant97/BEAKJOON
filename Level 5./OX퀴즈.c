#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0, i =0, x = 0;
    char *str = NULL;
    char *OX_arr = NULL;
    char *answer = NULL;
    
    scanf("%d",cnt);
    answer = (char *)malloc(sizeof(char) * cnt);
    memset(answer, 0x00, sizeof(char) * cnt);

    for(i=0; i<cnt; i++)
    {
        scanf("%s",str);
        OX_arr = (char *)malloc(sizeof(char) * strlen(str)+1);
        memset(OX_arr, 0x00, sizeof(char) * strlen(str)+1);
        sprintf(OX_arr,"%s",str);
        for(x = 0; x < strlen(OX_arr); x++)
        {
            if(OX_arr[x] == 'O')
            {
                
            }
        }

    }

}
