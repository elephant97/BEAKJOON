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
    int i = 0, range = 0, temp = 0, a_length = 0, b_length = 0;

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
        swap(a, b);//b가 자리수가 클 경우 교환
        b_length = a_length; //길이도 서로 교환함
    }

    for (i = range; i >= 0; i--)
    {
        if (b_length >= 0) //b는 무조건 작은자리수가 들어가게 하므로 남은 연산 자리수가 남은 경우에만 로직을 타도록 예외처리
        {
            temp += (int)((a[i] - '0') + (b[b_length] - '0'));
            b_length--;
        }
        else
        {
            temp += (int)(a[i] - '0');
        }

        if (temp > 9) //올림 수가 존재 할 경우
        {
            answer.push_back((char)(temp % 10) + '0'); 
            temp /= 10;
            if (0 > i - 1) answer.push_back((char)temp + '0'); //마지막 연산인 경우 자리수+1 위치에 올림수를 대입
        }
        else//올림 수가 존재 하지 않을 경우
        {
            answer.push_back((char)temp + '0');
            temp = 0;
        }
        answer_range++;
    }

    for (i = answer.length() - 1; i >= 0; i--)//answer을 구할 때 앞에서부터 대입하였으므로 정답은 끝에서부터 출력함
    {
        cout << answer[i];
    }
}
