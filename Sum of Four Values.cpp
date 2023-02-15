#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
    ll n,x;
    std::cin >> n >> x;
    std::map<ll,pair<ll,ll>>mp;
    ll a[n+5];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = i+1; j < n; j++)
        {
            if(mp.count(x-a[i]-a[j]))
            {
                std::cout << i+1 <<" "<<j+1<<" "<<mp[x-a[i]-a[j]].first+1<<" "<<mp[x-a[i]-a[j]].second+1<< std::endl;
                return;
            }
        }
        for (int k = 0; k < i; k++)
        {
           mp[a[k]+a[i]]={i,k}; 
        }
    }
    std::cout<< "IMPOSSIBLE" <<std::endl;
   
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah