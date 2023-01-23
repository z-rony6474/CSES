#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;

struct range
{
  ll l,r,index;
  bool operator<(const range &other) const
  {
    if(l==other.l)
    return r > other.r;
    return l < other.l;
  }
};
void solve()
{
  ll n;
  std::cin >> n;
  std::vector<range> ranges(n);
  std::vector<bool>contains(n) ;
  std::vector<bool>contained(n) ;
  for (int i = 0; i < n; i++) {
      std::cin >> ranges[i].l;
      std::cin >> ranges[i].r;
      ranges[i].index = i;
  }
  sort(ranges.begin(),ranges.end());
  ll mxEnd = 0;
  for (auto it : ranges) {
     if(it.r<=mxEnd){
       contained[it.index]=true;
     }
     mxEnd = max(mxEnd,it.r);
  }
  reverse(ranges.begin(),ranges.end());
  ll mnEnd = 1e10;
  for (auto it : ranges) {
     if(it.r>=mnEnd){
       contains[it.index]=true;
     }
     mnEnd = min(mnEnd,it.r);
  }
  
  for (auto i : contains) {
    cout<<i<<" ";
  }nl;
  for (auto i : contained) {
    cout<<i<<" ";
  }nl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah