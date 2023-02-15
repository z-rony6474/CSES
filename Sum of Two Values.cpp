#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n,sum;
	cin>>n>>sum;
	vector<ll>v;
	for(ll i=0;i<n;i++)
	{
		ll x;cin>>x;
		v.push_back(x);
	}
	map<ll,ll>mp;
	for(ll i=0;i<n;i++)
	{
		ll val=sum-v[i];
		if(mp[val])
		{
			cout<<mp[val]<<" "<<i+1<<endl;
			return;
		}
		mp[v[i]] = i+1;
	}
	cout<<"IMPOSSIBLE\n";
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah