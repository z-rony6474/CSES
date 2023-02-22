// Problem: Minimizing Coins
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1634
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define nl cout<<endl;
#define inf 1e9
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
	int n,x;
	cin>>n>>x;
	vector<int>coin(n);
	vector<int>dp(x+1,inf);
	for(int i=0;i<n;i++)cin>>coin[i];
	dp[0]=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i-coin[j])>=0)
			{
				dp[i]=min(dp[i],dp[i-coin[j]]+1);
			}
		}
	}
	cout<<(dp[x]==inf? -1:dp[x])<<endl;
}
int main()
{
	First_IO; 
	solve();
	return 0;
}
// Alhamdulillah