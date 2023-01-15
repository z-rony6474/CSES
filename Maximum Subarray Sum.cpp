#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll mx=a[0],sum=a[0];
	for(ll i=1;i<n;i++)
	{
		sum=max(sum+a[i],a[i]);
		mx=max(mx,sum);
	}
	cout<< mx << endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah