// Problem: Counting Rooms
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1192
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

                                   /*'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ*/

#include<bits/stdc++.h>
#define nl cout<<endl;
#define True cout<<"YES";
#define False  cout<<"NO";
#define First_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;

ll dx[4]{0,0,1,-1};
ll dy[4]{1,-1,0,0};
bool vi[1001][1001];
char s[1001][1001];
ll n,m,room=0;
void dfs(ll x, ll y)
{
	vi[x][y]=true;
	for(ll i=0;i<4;i++)
	{
		ll ax = dx[i]+x;
		ll by = dy[i]+y;
		if(ax>=0 && ax<n && by>=0 && by<m && s[ax][by]!='#' && !vi[ax][by])
		{
			dfs(ax,by);
		}
	}
}
void solve()
{
	ll k,x,y,l,c,cnt=0,ans=0,res=0,mx=INT_MIN,mn=INT_MAX;
	cin >> n >> m;
	ll a[n+5],b[n+5];
	vector<ll>v;
	map<ll,ll>mp;
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cin >> s[i][j];
		}
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(s[i][j]=='.' && vi[i][j]==false)
			{
				room++;
				dfs(i,j);
			}
		}
	}
	
	cout << room << endl;
}
int main()
{
	First_IO;
	ll t,ca=0;
	solve();
	return 0;
}
// Alhamdulillah