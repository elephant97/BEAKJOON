#include<iostream>
using namespace std;

int main()
{
	double *arr = NULL;
	int count = 0; double average = 0.00;
	double max = 0; int i = 0;

	cin >> count;
	
	arr = new double[count];

	for (i = 0; i < count; i++)
	{
		cin >> arr[i];
		if (i == 0)
		{
			max = arr[i];
		}
		
		max = arr[i] > max ? arr[i] : max;	
	}

	for (i = 0; i < count; i++)
	{
		arr[i] = arr[i] / max * 100.0;
	}

	average = arr[0];
	for (i = 1; i < count; i++)
	{
		average += arr[i];
	}

	cout << average / (double)count;
	delete []arr;
}
