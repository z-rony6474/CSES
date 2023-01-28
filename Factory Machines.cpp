#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
void solve()
{
    ll n,t;
    std::cin >> n >> t;
    ll a[n+5];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    ll left=0,right=1e18;
    ll mnTime=0;
    while(left<=right)
    {
        ll mid = (left+right)/2;
        ll cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            cnt+=(mid/a[i]);
            if(cnt>=t)break;
        }
        if(cnt>=t)
        {
            mnTime = mid;
            right  = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    
    std::cout << mnTime << std::endl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah