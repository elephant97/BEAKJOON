#include<iostream>
using namespace std;

int main()
{
	int arr[3] = { 0, };
	int return_arr[10] = { 0, };
	int cal = 0; int num = 0; int x = 10;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		if (i == 0)
		{
			cal = arr[i];
			continue;
		}
		cal *= arr[i];
	}

	while (cal != 0)
	{
		num = cal % x;
		cal /= x;
		return_arr[num]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << return_arr[i] <<"\n";
	}
}
