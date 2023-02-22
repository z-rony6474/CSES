// Problem: Removing Digits
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1637
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
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;
	cin>>n;
	vector<int>dp(n+1,inf);
	dp[0]=0;
	for(ll i=0;i<=n;i++)
	{
		ll tmp = i;
		while(tmp>0)
		{
			dp[i]=min(dp[i],dp[i-tmp%10]+1);
			tmp/=10;
		}
	}
	cout<<dp[n]<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah