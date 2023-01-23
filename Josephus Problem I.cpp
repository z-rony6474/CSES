#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll n;
	cin>>n;
	vector<ll>ch;
	for(ll i=1;i<=n;i++)ch.push_back(i);
	while(ch.size()>1)
	{
		vector<ll>temp;
		for(ll i=0;i<ch.size();i++)
		{
			if(i%2)cout<<ch[i]<<" ";
			else temp.push_back(ch[i]);
		}
		if(ch.size()%2==0)
		{
			ch=temp;
		}
		else
		{
			ch.clear();
			ll st = temp.back();
			temp.pop_back();
			ch.push_back(st);
			for(auto it : temp)ch.push_back(it);
		}
	}
	cout<<ch.front()<<endl;
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah