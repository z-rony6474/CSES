#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	ll a[n+6],s=0;
	for(ll i=0;i<n;i++)cin>>a[i];
	ll ans=0,vl;
	sort(a,a+n);
	if(n%2)vl=a[n/2];
	else vl=(a[n/2]+a[(n/2)-1])/2;
	for(ll i=0;i<n;i++)
	{
		ans+=(abs(a[i]-vl));
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