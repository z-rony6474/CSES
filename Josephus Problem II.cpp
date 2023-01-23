#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ordered_set<ll> childrens;
    for(ll i=1;i<=n;i++)childrens.insert(i);
    ll start=0;
    while(childrens.size()>0)
    {
        ll pos = (start+k)%childrens.size();
        start=pos;
        auto it = childrens.find_by_order(pos);
        std::cout << *it <<" ";
        childrens.erase(it);
        
    }
}
int main()
{
	solve();
	return 0;
}
// Alhamdulillah