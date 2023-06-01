#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
typedef long long ll;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
	    cin>>v[i];
	}
	ordered_set<pair<int,int>>os;
	for (int i = 0; i < k; i++) {
	    os.insert({v[i],i});
	}
	std::cout << os.find_by_order((k-1)/2)->first<<" ";
	for (int i = 1; i < n-k+1; i++) {
	    os.erase({v[i-1],i-1});
	    os.insert({v[i+k-1],i+k-1});
	    std::cout << os.find_by_order((k-1)/2)->first << " ";
	}
}
