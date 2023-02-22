// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1158
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define nl cout<<endl;
using namespace std;
typedef long long ll;
void knapsack()
{
	int n,m;
	cin>>n>>m;
	int profit[n+5],wt[n+5];
	profit[0]=wt[0]=0;
	for(int i=1;i<=n;i++)cin>>wt[i];
	for(int i=1;i<=n;i++)cin>>profit[i];
	vector<vector<int>> knapsack(1001,vector<int>(100001,0));
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			if(i==0 || j==0)knapsack[i][j]=0;
			else if(wt[i]<=j)
			{
			  knapsack[i][j]=max(profit[i]+knapsack[i-1][j-wt[i]],knapsack[i-1][j]);	
			}
			else
			{
			  knapsack[i][j]=knapsack[i-1][j];
			}
		}
	}
	cout<<knapsack[n][m]<<endl;
}
int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     knapsack();	
	return 0;
}