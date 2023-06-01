#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll,ll>&a,pair<ll,ll>&b)
{
	return a.second<b.second;
}
int main()
{
	ll n,k;
	cin>>n>>k;
	vector<pair<ll,ll>>m(n);
	for(ll i=0;i<n;i++)
	{
		cin>>m[i].first>>m[i].second;
	}
	sort(m.begin(),m.end(),cmp);
	set<pair<ll,ll>>st;
	ll cnt=0;
	for(ll i=0;i<n;i++)
	{
		if(st.size()==0)
		{
			st.insert({m[i].second*-1,i});
		}
		else
		{
			auto it = st.lower_bound({m[i].first*-1,-1});
			if(it!=st.end())
			{
				st.erase(it);
				st.insert({m[i].second*-1,i});
			}
			else if(it==st.end() && st.size()<k)
			{
				st.insert({m[i].second*-1,i});
			}
			else cnt++;
		}
	}
	cout << n-cnt <<endl;
	
}