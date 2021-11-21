#include<iostream>
using namespace std;


int main()
{
	int a = 0, i;
	char* str = NULL;
	int sum = 0;

	cin >> a;
	str = new char[a];
	cin >> str;
	for (i = 0; i < a; i++)
	{
		sum += str[i] - '0';
	}

	cout << sum;
}
