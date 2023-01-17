#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	ll a[n+5],in[n+3],ans=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		in[a[i]]=i;
	}
	in[0]=n+1;
	for(ll i=0;i<n;i++)
	{
		if(in[a[i]]<in[a[i]-1])ans++;
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