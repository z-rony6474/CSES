#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    std::cin >> n;
    ll ans=0,mx=-1;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        ans+=x;
        mx = max(mx,x);
    }
    std::cout << max(ans,mx*2) << std::endl;
    
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah