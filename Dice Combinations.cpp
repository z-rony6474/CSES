// Problem: Dice Combinations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1633
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
	ll dp[n+1]{0};
	dp[0]=1;
	for(ll i=0;i<=n;i++)
	{
		for(ll j=1;j<=6;j++)
		{
			if(i-j>=0)
			{
				dp[i]=(dp[i]+dp[i-j])%mod;
			}
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