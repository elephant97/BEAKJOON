#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;
    int i = 0;
    
    for(i = 0; i < a.size(); i++)
    {
        ans += (long long)a[i];
    }
    
	return ans;
}
