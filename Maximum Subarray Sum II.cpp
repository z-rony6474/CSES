#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	vector<ll>v(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<=n;i++)
	{
		v[i]+=v[i-1];
	}
	set<pair<ll,int>>st;
	for(int i=a;i<=b;i++)
	{
		st.insert({v[i],i});
	}
	ll maxsum = -1e18;
	for(int i=1;i<=n-a+1;i++)
	{
		maxsum = max(maxsum,st.rbegin()->first-v[i-1]);
		st.erase({v[i+a-1],i+a-1});
		if(i+b<=n)
		{
			st.insert({v[i+b],i+b});
		}
	}
	cout<<maxsum<<endl;
	
}
