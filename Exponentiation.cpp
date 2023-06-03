#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
ll binary_exponentiation(ll base,ll exponent){
    if(exponent==0)return 1;
    ll result = binary_exponentiation(base,exponent/2);
    if(exponent%2){
        return(( (result*result)%mod)*base)%mod;
    }
    else{
        return (result*result)%mod;
    }
}
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        ll base,exponent;
        cin>>base>>exponent;
        cout<<binary_exponentiation(base,exponent)<<endl;

    }
    






}