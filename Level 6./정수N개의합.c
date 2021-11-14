long long sum(int *a, int n) {
	long long ans = 0;
    int i = 0;
    
    for (i = 0; i < n; i++)
	{
		ans += (long long)a[i];
	}

	return ans;
}
