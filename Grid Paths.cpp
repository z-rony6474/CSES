// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1638
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
void solve()
{
	ll n;
	cin>>n;
	vector<string>grid(n);
	for(ll i=0;i<n;i++)cin>>grid[i];
	vector<vector<ll>>dp(n,vector<ll>(n,0));
	dp[0][0]=(grid[0][0]=='.');
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(grid[i][j]=='.')
			{
				if(i-1>=0 && grid[i-1][j]=='.')
			    {
				   dp[i][j] =(dp[i][j]+dp[i-1][j])%mod;
			    }
			    if(j-1>=0 && grid[i][j-1]=='.')
			    {
				   dp[i][j] =(dp[i][j]+dp[i][j-1])%mod;
			    }
			}
		}
	}
	cout<<dp[n-1][n-1]<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah