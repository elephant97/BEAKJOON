#include <iostream>
using namespace std;

int main()
{
    int in_cnt = 0, person_cnt = 0, i = 0, x = 0, up_cnt = 0;
    double avg = 0.00;
    double* score = NULL;
    double percent_upscore = NULL;

    cin >> in_cnt;

    for (i = 0; i < in_cnt; i++)
    {
        avg = 0;
        cin >> person_cnt;
        score = new double[person_cnt] {0, };
        for (x = 0; x < person_cnt; x++)
        {
            cin >> score[x];
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

        cout.precision(3);
        percent_upscore = (double)up_cnt / person_cnt * 100;
        cout << fixed << percent_upscore << "%\n";
        delete[]score; 
    }
}
