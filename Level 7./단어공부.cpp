#include<iostream>
using namespace std;

int main() {

    string str;
    int i = 0;
    int num[26] = { 0, };
    int max = 0;
    int max_index = 0;

    cin >> str;


    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 97)
            str[i] -= 32;
        num[(int)(str[i] - 'A')]++;
    }

    for (i = 0; i < 26; i++) 
    {
        if (max < num[i]) 
        {
            max = num[i];
            max_index = i;
        }
        else if (max == num[i] && num[i] != 0) 
        {
            max_index = -1;
        }
    }
    
    if (max_index != -1)
        cout << (char)(max_index+'A');
    else
       cout << "?\n";
}

