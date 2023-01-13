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
	map<ll,ll>mp;
	for(ll i=0;i<n-1;i++)
	{
		ll x;cin>>x;
		mp[x]++;
	}
	for(ll i=1;i<=n;i++)
	{
		if(mp[i]==0)
		{
			cout<<i<<endl;return;
		}
	}
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah