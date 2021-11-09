#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 0, };
	int x = 0; int i = 0;
	int count = 0;
	int last_overlap_flag = 0; //last array overlap true or false

	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}


	for (i = 0; i < 10; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			if (arr[x] == arr[i])
			{
				if (x == 9 && last_overlap_flag != 1)
				{
					last_overlap_flag == 1;
				}
				break;
			}
			
			if (x == 9)
			{
				count++;
			}
		}
		
	}

	if (last_overlap_flag != 1)
	{
		count++;
	}
	cout << count;
	
}
