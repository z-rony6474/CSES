#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
    ll n,x;
    std::cin >> n >> x;
    std::vector<pair<ll,ll>>v;
    for (ll i = 0; i < n; i++)
    {
    	ll x;
    	cin>>x;
    	v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    ll rt=0;
    for (ll i = 0; i < n-2; i++) 
    {
        ll val = x-v[i].first;
        rt = n-1;
        for (ll lf = i+1; lf < rt; lf++) 
        {
           while(lf+1<rt && (v[lf].first+v[rt].first)>val)rt--;
           if(v[lf].first+v[rt].first==val)
           {
               std::cout << v[i].second<<" "<<v[lf].second<<" "<<v[rt].second << std::endl;
               return;
           }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah