#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n,m;
	cin>>n>>m;
	multiset<ll>tp;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		tp.insert(x);
	}
	for(ll i=0;i<m;i++)
	{
		ll val;
		cin>>val;
		auto it = tp.upper_bound(val);
		if(it == tp.begin())
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<*(--it)<<endl;
			tp.erase(it);
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