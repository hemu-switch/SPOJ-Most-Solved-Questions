#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll reversed(ll num){
	ll ans=0;

	while(num){
		ll reminder = num%10;
		ans = ans*10 + reminder;
		num/=10;
	}

	return ans;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll first = reversed(n);
		ll second = reversed(m);

		ll sum = first+second;

		ll ans = reversed(sum);
		cout<<ans;

		cout<<endl;
	}

}