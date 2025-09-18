#include<bits/stdc++.h>
using namespace std;

using ll=long long;
 ll countTrailingZeros(ll n){
 	ll count=0;
 	while(n>0){
 		n/=5;
 		count +=n;
 	}
 	return count;
 }
int main(){
	ll n;
	cin>>n;
	cout<<countTrailingZeros(n)<<"\n";
	return 0;
}