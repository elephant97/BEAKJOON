#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;
    int i = 0, cnt = 0;

    getline(cin, str); //개행 입력시 문자받기를 종료
    if (str.empty())
    {
        cout << cnt;
        return 0;
    }

    while(i != str.length()) 
    {
        if ( str[i] == ' ' && i != 0 && i != (str.length()-1) )
        {
            cnt++;
        }
        i++;
    }

    cnt++;
    
    cout << cnt;
}

