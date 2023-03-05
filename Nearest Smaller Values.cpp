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
	ll n,m,k,x,y,l,c,cnt=0,ans=0,res=0,mx=INT_MIN,mn=INT_MAX;	
	cin>>n;
	ll a[n+5],b[n+5];
	for(ll i=0;i<n;i++)cin>>a[i];
	stack<pair<ll,ll>>stak;
	for(ll i=0;i<n;i++)
	{
		ll ok=1;
		while(!stak.empty())
		{
			if(stak.top().first<a[i])
			{
				cout<<stak.top().second<<" ";
				ok=0;
				break;
			}
			else
			{
				stak.pop();
			}
		}
		if(ok)
		{
			cout<<0<<" ";
		}
		stak.push({a[i],i+1});
	}
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah