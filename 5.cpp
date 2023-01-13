#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;cin>>n;
	if(n<=3 && n!=1)
	{
		cout<<"NO SOLUTION\n";
		return;
	}
	vector<ll>odd,ev;
	for(ll i=1;i<=n;i++)
	{
		if(i%2)odd.push_back(i);
		else ev.push_back(i);
	}
	sort(odd.begin(),odd.end(),greater<ll>());
	sort(ev.begin(),ev.end(),greater<ll>());
	for(auto it : odd)cout<<it<<" ";
	for(auto it : ev)cout<<it<<" ";
}

int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah