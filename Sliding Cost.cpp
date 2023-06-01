#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	
	ll a[n+2];
	for (ll i = 0; i < n; i++) {
	    cin>>a[i];
	}
	if(k==1)
	{
		for(ll i=0;i<n;i++)
		{
			cout<<0<<" ";
		}
		return 0;
	}
	if(k==2)
	{
		for(ll i=1;i<n;i++)
		{
			cout<<abs(a[i-1]-a[i])<<" ";
		}
		return 0;
	}
	
	set<pair<ll,ll>>left;
	set<pair<ll,ll>>right;
	vector<pair<ll,ll>>v;
	
	for(ll i=0;i<k;i++)
	{
		v.push_back({a[i],i});
	}
	
	sort(v.begin(),v.end());
	ll left_sum=0,right_sum=0;
	
	for(ll i=0;i<k/2+(k%2);i++)
	{
		left.insert(v[i]);
		left_sum+=v[i].first;
	}
	
	for(ll i=k/2+(k%2);i<k;i++)
	{
		right.insert(v[i]);
		right_sum+=v[i].first;
	}
	
	ll mid = left.rbegin()->first;
	cout<<mid*left.size()-left_sum + right_sum-mid*right.size()<<" ";
	
	for(ll i=1;i<n-k+1;i++)
	{
		if(left.count({a[i-1],i-1}))
		{
			left_sum-=a[i-1];
			left.erase({a[i-1],i-1});
		}
		else
		{
			right_sum-=a[i-1];
			right.erase({a[i-1],i-1});
		}
		if(*(left.rbegin()) < make_pair(a[k-1+i],k-1+i))
		{
			right_sum+=a[k-1+i];
			right.insert({a[k-1+i],k-1+i});
		}
		else
		{
			left_sum+=a[k-1+i];
			left.insert({a[k-1+i],k-1+i});
		}
		while(left.size()<k/2+(k%2))
		{
			pair<ll,ll> z = *(right.begin());
			left_sum+=z.first;
			left.insert(z);
			right.erase(z);
			right_sum-=z.first;
		}
		while(left.size()>k/2+(k%2))
		{
			pair<ll,ll> z = *(left.rbegin());
			left_sum-=z.first;
			left.erase(z);
			right.insert(z);
			right_sum+=z.first;
		}
		
		mid = left.rbegin()->first;
		
		cout<<mid*left.size()-left_sum + right_sum-mid*right.size()<<" ";
	}
}
