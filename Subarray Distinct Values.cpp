#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
int main()
{
	int n,k;
	cin>>n>>k;
    int ar[n+1];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	map<int,int>mp;
	int j=0;
	ll res=0;
	for(int i=0;i<n;i++){
		while(j<n &&((int)mp.size()<k || mp.count(ar[j])>0))
		{
			mp[ar[j]]++;
			j++;
		}
		res += j-i;
		mp[ar[i]]--;
		if(mp[ar[i]]==0)
		{
			mp.erase(ar[i]);
		}
	}
	
	cout<<res<<ln;
	
}