#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ll t;
	cin>>t;
	for(ll i=1;i<=t;i++){
		ll ans=((i*i)*(i*i-1))/2-4*(i-1)*(i-2);
		cout<<ans<<"\n";
	}
	return 0;
}