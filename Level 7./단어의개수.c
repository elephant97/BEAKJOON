#include<stdio.h>
#include<string.h>

int main() {

    char str[1000000 + 1] = { 0, };
    int i = 0, cnt = 0, length = 0;

    scanf("%[^\n]",str); //개행 입력시 문자받기를 종료
    length = strlen(str);
    if (length == 0)
    {
        printf("%d", cnt);
        return 0;
    }

    cnt++;

    while (i != length)
    {
        if (str[i] == ' ' && i != 0 && i != (length -1))
        {
            cnt++;
        }
        i++;
    }
    printf("%d", cnt);
}
