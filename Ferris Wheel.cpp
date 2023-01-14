#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	// This problem had solved by using two pointer
	ll n,k;
	cin>>n>>k;
	ll a[n+5],ans=0;
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll l=0,r=n-1;
	while(l<=r)
	{
		if(a[l]+a[r]<=k)ans++,l++,r--;
		else ans++,r--;
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