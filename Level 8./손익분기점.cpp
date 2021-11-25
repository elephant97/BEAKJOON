#include<iostream>
using namespace std;

int main()
{
	long long A = 0, B = 0, C = 0, variable_cost = 0, sales_cost = 0;
	int i = 1;
	cin >> A >> B >> C;

	if (B >= C)
	{
		cout << "-1";
		return 0;
	}


	cout << A/(C-B)+1;
}
