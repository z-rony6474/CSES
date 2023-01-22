// Problem: Playlist
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1141
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<ll,ll>mp;
	ll c=0,ans=INT_MIN;
	ll i=0,j=0;
	while(j<n)
	{
		if(mp[a[j]]==0)
		{
			mp[a[j]]++;
			c++;
			ans=max(ans,c);
			j++;
		}
		else
		{
			mp[a[i]]--;
			i++;
			c--;
		}
	}
	cout<< ans << endl;
}
int main()
{
	First_IO; 
	solve();
	return 0;
}
// Alhamdulillah