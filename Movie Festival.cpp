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
		ll s,e;
		cin>>s>>e;
		v.push_back({e,s});
	}
	sort(v.begin(),v.end());
	ll end=v[0].first;
	ll ans=1;
	for(ll i=1;i<n;i++)
	{
		if(v[i].second>=end)
		{
			ans++;end=v[i].first;
		}
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