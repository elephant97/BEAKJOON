#include <iostream>
using namespace std;

int main()
{
    int in_cnt = 0, person_cnt = 0, i = 0, x = 0, up_cnt = 0;
    double avg = 0.00;
    string OX_str = "";
    double* score = NULL;
    double* percent_upscore = NULL;

    cin >> in_cnt;
    percent_upscore = new double[in_cnt] {0, };

    for (i = 0; i < in_cnt; i++)
    {
        avg = 0;
        cout << i;
        cin >> person_cnt;
        score = new double[person_cnt] {0, };
        for (x = 0; x < person_cnt; x++)
        {   
            cin >> score[i];
            avg += score[i];
        }

        up_cnt = 0;
        avg /= (double)person_cnt;
        for (x = 0; x < person_cnt; x++)
        {
            if (score[x] > avg)
            {
                up_cnt++;
            }
        }
        percent_upscore[i] = (double)((double)up_cnt / (double)person_cnt * (double)100);
        cout << percent_upscore[i] << "% \n";
        delete[]score;
    }

    for (i = 0; i < in_cnt; i++)
    {
        cout << percent_upscore[i] << "%\n";
    }

    delete []percent_upscore;
}
