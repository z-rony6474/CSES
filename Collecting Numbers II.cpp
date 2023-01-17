#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n,q;cin>>n>>q;
	ll a[n+5],in[n+3],ans=1,pi=1;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		in[a[i]]=i;
	}
    for (int i = 1; i <= n; i++) {
		if (pi> in[i])ans++;
		pi= in[i];
    }
	in[n+1]=n+1;
//	cout<<ans<<endl;
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		ll r = a[x], s = a[y];
		swap(a[x], a[y]);
		if (in[r-1] <= in[r] && in[r-1] > y) ans++;
		if (in[r-1] > in[r] && in[r-1] <= y) ans--;
		if (in[r] <= in[r+1] && y > in[r+1])  ans++;
		if (in[r] > in[r+1] && y <= in[r+1]) ans--;	
		in[r] = y;
		if (in[s-1] <= in[s] && in[s-1] > x) ans++;
		if (in[s-1] > in[s] && in[s-1] <= x)ans--;
		if (in[s] <= in[s+1] && x > in[s+1])  ans++;
		if (in[s] > in[s+1] && x <= in[s+1]) ans--;
		in[s] = x;
		cout<< ans << endl;
	}
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah