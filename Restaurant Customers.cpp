#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	vector<pair<ll,bool>>v;
	while(n--)
	{
		ll x,y;
		cin>>x>>y;
		v.push_back({x,true});
		v.push_back({y,false});
	}
	sort(v.begin(),v.end());
	ll ans=0,T=0,F=0;
	for(auto it : v)
	{
		(it.second==true)?  T++ : F++;
		ans=max(ans,abs(T-F));
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