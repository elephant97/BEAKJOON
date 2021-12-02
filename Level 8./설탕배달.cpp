#include<iostream>
using namespace std;

int main()
{
    int gram = 0, temp = 0, i = 0;
    int sugar = 0;
    cin >> gram;

    temp = gram / 5;

    while (temp >= 0)
    {
        if ((gram - (temp * 5)) % 3 == 0) //5의 최대치로 나누고 3의 최소치로 나누었을 때
        {
            sugar = temp + (gram - (temp * 5)) / 3;
            cout << sugar << "\n";
            break;
        }
        temp--;
    }
    if (temp < 0) sugar = -1; //5으로도 3으로도 안 나눠지는 경우


    cout << sugar;
    return 0;
}
