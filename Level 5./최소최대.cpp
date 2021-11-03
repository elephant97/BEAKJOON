#include<iostream>
using namespace std;

int main()
{
    int cnt = 0, max = 0, min = 0;
    int* arr = 0;
    int i = 0, j = 0;

    cin >> cnt;
    arr = new int[cnt];

    for (i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < cnt; i++)
    {
        min = (min > arr[i]) ? arr[i] : min;
        max = (max < arr[i]) ? arr[i] : max;
    }

    cout << min << " " << max;
    delete [] arr;
}
