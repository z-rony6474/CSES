#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	ll a[n+1];
	set<ll>s;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah