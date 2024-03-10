#include<time.h>
#include <bits/stdc++.h>
using namespace std;
int count(int coins[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (sum < 0)
		return 0;
	if (n <= 0)
		return 0;	
	return count(coins, n, sum - coins[n - 1])
		+ count(coins, n - 1, sum);
}

int main()
{
	int i, j;
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 5;
    clock_t t = clock();
 	int ans = count(coins,n,sum);
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;
    cout<<ans;
	cout << " " <<ans;
	return 0;
}
