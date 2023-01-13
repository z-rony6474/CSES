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
	while(n!=1)
	{
		if(n%2)
		{
			cout<<n<<" ";
			n=(n*3)+1;
		}
		else
		{
			cout<<n<<" ";
			n/=2;
		}
	}
	cout<<1<<endl;
	
}
int main()
{
	First_IO;
	solve();
	return 0;
}
// Alhamdulillah