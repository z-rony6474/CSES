// Problem: Traffic Lights
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1163
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
	ll x,n;
	cin>>x>>n;
	set<ll>pos{0,x};
	/*pos.insert(0);
	pos.insert(x);*/
	multiset<ll>length{x};
	//length.insert(x);
	for(ll i=0;i<n;i++)
	{
		ll newval;
		cin>>newval;
		pos.insert(newval);
		auto it = pos.find(newval);
		ll next_val= *next(it);
		ll previous_val=*prev(it);
		length.erase(length.find(next_val-previous_val));
		length.insert(next_val-newval);
		length.insert(newval-previous_val);
		
		cout<< *length.rbegin() << " ";
		
	}
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah