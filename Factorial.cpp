#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll findTrailingZeros(ll n){
	ll ans=0;

	for(ll i=5; n/i>=1;i*=5){
		ans += n/i;
	}
	return ans;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll num;
		cin>>num;
		cout<<findTrailingZeros(num);
		cout<<endl;
	}

}