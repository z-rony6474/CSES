// Problem: Towers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1073
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
	ll n; cin>>n;
	vector<ll>li;
	for(ll i=0;i<n;i++)
	{
		ll x;cin>>x;
		auto it = upper_bound(li.begin(),li.end(),x);
		if(it == li.end())
		{
			li.push_back(x);
		}
		else
		{
			ll pos = it-li.begin();
			li[pos]=x;
		}
		
	}
	cout<<li.size()<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah