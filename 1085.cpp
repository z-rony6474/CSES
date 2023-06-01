// Problem: Array Division
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1085
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

                                   /*'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ*/

#include<bits/stdc++.h>
#define nl cout<<endl;
#define True cout<<"YES";
#define False  cout<<"NO";
#define First_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
	ll n,k;
	cin >> n >> k;
	ll a[n+5],mx=INT_MIN;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		mx = max(mx,a[i]);
	}
	ll low = mx;
	ll high = 1e18;
	ll ans=1e18;
	while(low<=high)
	{
		ll mid = (low+high)/2;
		ll block=1;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			if(sum+a[i]>mid)
			{
				sum=0;block++;
			}
			sum+=a[i];
		}
		if(block>k)
		{
			low = mid+1;
		}
		else{
			high = mid-1;
			ans = min(ans,mid);
		}
	}
	cout<<ans<<endl;
}
int main()
{
	First_IO; 
	solve();
	return 0;
}
// Alhamdulillah