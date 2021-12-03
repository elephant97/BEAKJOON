#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string a;
    string b;
    string answer;
    string temp_str;
    int i = 0, range = 0, temp = 0, a_length = 0, b_length = 0, answer_range = 0;

    cin >> a >> b;
    a_length = a.length() - 1;
    b_length = b.length() - 1;
    if (a_length >= b_length)
    {
        range = a_length;
    }
    else
    {
        range = b_length;
        swap(a, b);
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
            answer.push_back((char)(temp % 10) + '0');
            temp /= 10;
            if (0 > i - 1) answer.push_back((char)temp + '0');
        }
        else
        {
            answer.push_back((char)temp + '0');
            temp = 0;
        }
        answer_range++;
    }

    for (i = answer.length() - 1; i >= 0; i--)
    {
        cout << answer[i];
    }
}
