
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
	cin >> n ;
	ll a[n+5],b[n+5];
	for(ll i=0;i<n;i++)cin>>a[i];
	vector<ll>v;
	map<ll,ll>mp;
	set<ll>s;
	s.insert(0);
	mp[0]++;
	a[-1]=0;
	for(ll i = 0; i < n ; i++)
	{
		a[i]=(a[i]+a[i-1])%n;
		a[i]=(a[i]+n)%n;
		ans+=mp[a[i]];
		mp[a[i]]++;
	}
	cout << ans << endl;
}
int main()
{
	First_IO;
	ll t,ca=0;
	solve();
	return 0;
}
// Alhamdulillah