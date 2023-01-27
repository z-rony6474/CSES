#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;

struct customer
{
  ll a,b,index;
  bool operator<(const customer &other) const
  {
    if(a==other.a)
    return b < other.b;
    return a < other.a;
  }
};
void solve()
{
	ll n;
	std::cin >> n;
	
	std::vector<pair<ll,ll>>ans;
	std::vector<customer>input(n);
	set<ll>st;
	priority_queue<pair<ll,ll>,std::vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
	
	ll room_no=1;
	pq.push(make_pair(0ll,room_no));
	room_no++;
	
	for (int i = 0; i < n; i++) 
	{
	    ll aa,dd;
	    std::cin >> aa >> dd;
	    input[i].a=aa;
	    input[i].b=dd;
	    input[i].index=i;
	}
	
	sort(input.begin(),input.end());
	
	for (int i = 0; i < n; i++) 
	{
	    ll x,y;
	    x = input[i].a;
	    y = input[i].b;
	    
	    ll date = pq.top().first;
	    ll Room = pq.top().second;
	    
	    if(x>date)
	    {
	        ans.push_back({input[i].index,Room});
	        st.insert(Room);
	        pq.pop();
	        pq.push(make_pair(y,Room));
	    }
	    else
	    {
	        ans.push_back({input[i].index,room_no});
	        st.insert(room_no);
	        pq.push(make_pair(y,room_no));
	        room_no++;
	    }
	}
	sort(ans.begin(),ans.end());
	std::cout << st.size() << std::endl;
	
	for (auto it : ans)
	{
	    std::cout << it.second <<" ";
	}nl;
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah