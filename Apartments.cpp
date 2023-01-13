#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n],b[m];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	ll i=0,j=0,ans=0;
	while(i<n and j<m)
	{
		if(abs(a[i]-b[j])<=k)
		{
			i++,j++,ans++;
		}
		else if(b[j]>a[i])i++;
		else j++;
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