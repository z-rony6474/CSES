#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	ll a[n+1],ans=0;
	for(ll i=0;i<n;i++)cin>>a[i];
	for(ll i=1;i<n;i++)
	{
		if(a[i]<a[i-1])ans+=a[i-1]-a[i],a[i]+=a[i-1]-a[i];
	}
	cout<<ans<<endl;
}
int main()
{
	First_IO;solve();
	return 0;
}
// Alhamdulillah
