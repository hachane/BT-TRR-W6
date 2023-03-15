#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int dp[100][100];
	dp[1][0] = 1; dp[1][1] = 1;
	dp[2][0] = 1; dp[2][1] = 2; dp[2][2] = 1;
	for (int i = 2; i<= n; i++)
	{
		for (int j = 0; j <= i + 1; j++)
		 dp[i + 1][j] = dp[i][j] + dp[i][j - 1];
	}
	int sum = 0;
	for (int i = n/2 + 1; i <= n; i++)
	 sum += dp[n][i];
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		 cout << dp[i][j] << " ";
		cout << endl;
	}
	cout << sum;
	return 0;
}
