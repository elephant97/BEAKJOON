#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int i = 0;
	int result = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) >= 'A' && str.at(i) <= 'C')
			result += 3;
		else if (str.at(i) >= 'D' && str.at(i) <= 'F')
			result += 4;
		else if (str.at(i) >= 'G' && str.at(i) <= 'I')
			result += 5;
		else if (str.at(i) >= 'J' && str.at(i) <= 'L')
			result += 6;
		else if (str.at(i) >= 'M' && str.at(i) <= 'O')
			result += 7;
		else if (str.at(i) >= 'P' && str.at(i) <= 'S')
			result += 8;
		else if (str.at(i) >= 'T' && str.at(i) <= 'V')
			result += 9;
		else if (str.at(i) >= 'W' && str.at(i) <= 'Z')
			result += 10;
	}
	cout << result;
}
