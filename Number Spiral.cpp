#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll x,y;
	cin>>x>>y;
	if(x<=y)
	{
		ll m=y*y;
		if(y%2)cout<<m-(x-1)<<endl;
		else 
		{
		   m = ((y-1)*(y-1))+1;

		   cout<<m+(x-1)<<endl;
		}
	}
	else
	{
		ll m=x*x;
		if(x%2==0)cout<<m-(y-1)<<endl;
		else 
		{
		   m = ((x-1)*(x-1))+1;
		   cout<<m+(y-1)<<endl;
		}
	}
}
int main()
{
	First_IO; ll t;
	cin>>t;
	while(t--) solve();
	return 0;
}
// Alhamdulillah