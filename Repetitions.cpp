#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	string s;
	cin>>s;
	ll c=1,ans=INT_MIN;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]==s[i+1])c++;
		else
		{
			ans=max(ans,c);
			c=1;
		}
	}
	ans=max(ans,c);
	cout<<ans<<endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah
