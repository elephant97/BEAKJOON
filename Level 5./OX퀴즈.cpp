#include <iostream>
using namespace std;

int main()
{
    int cnt = 0, i = 0, x = 0, o_cnt = 0;
    string OX_str = "";
    int* answer = NULL;

    cin >> cnt;
    answer = new int[cnt] {0,};

    for (i = 0; i < cnt; i++)
    {
        o_cnt = 0;
        cin >> OX_str;
        for (x = 0; x < OX_str.length(); x++)
        {
            if (OX_str[x] == 'O')
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
        cout << answer[i] << "\n";
    }

    delete []answer;
}
