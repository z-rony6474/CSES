// Problem: Tasks and Deadlines
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1630
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
	ll n;cin>>n;
	vector<pair<ll,ll>>v;
	for(ll i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		v.push_back({x,-y});
	}
	sort(v.begin(),v.end());
	ll s=0,ans=0;
	for(auto it : v)
	{
		ll x =it.first+s;
		ll y = -(it.second);
		ans += (y-x);
		s+=it.first;
	}
	cout<<ans<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah