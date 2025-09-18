#include <bits/stdc++.h>

using namespace std;

using ll=long long;
const ll MOD=1e9+7;

ll modExp(ll base,ll exp,ll mod){
	ll result=1;
	base %=mod;
	
	while(exp>0){
		if(exp == 1){
			result=(result*base)%mod;
		}
		base=(base*base)%mod;
		exp>>=1;
	}
	return result;
}

int main(){
	ll n;
	cin>>n;
	ll ans=1;
	cout<<modExp(2,n,MOD);
	return 0;
}