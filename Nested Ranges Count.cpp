#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
typedef long long ll;

struct range
{
  ll l,r,index;
  bool operator<(const range &other) const
  {
    if(l == other.l)
         return r > other.r;
    return l < other.l;
  }
};
void solve()
{
  ll n;
  std::cin >> n;
  
  std::vector<range> ranges(n);
  std::vector<ll>contains(n) ;
  std::vector<ll>contained(n) ;
  
  ordered_set<pair<ll,ll>> count;
  
  for (int i = 0; i < n; i++) {
      std::cin >> ranges[i].l;
      std::cin >> ranges[i].r;
      ranges[i].index = i;
  }
  sort(ranges.begin(),ranges.end());
  ll i=0;
  for (auto it : ranges) {
     count.insert({it.r,-1*i});
     contained[it.index] = count.size()-count.order_of_key({it.r,-1*i})-1;
     i++;
  }
  reverse(ranges.begin(),ranges.end());
  count.clear();
  i=n-1;
  for (auto it : ranges) {
     count.insert({it.r,-1*i});
     contains[it.index] = count.order_of_key({it.r,-1*i});
     i--;
  }
  
  for (auto it : contains) {
    cout<<it<<" ";
  }
  std::cout << std::endl;
  for (auto i : contained) {
    cout<<i<<" ";
  }
}
int main()
{
	solve();
	return 0;
}
// Alhamdulillah