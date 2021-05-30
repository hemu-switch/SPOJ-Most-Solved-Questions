#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		for(ll i=0;i<n;i++){
			ll temp;
			cin>>temp;
			// (a+b)%m = ((a%m) + (b%m))%m
			sum = ((sum%n) + (temp%n))%n;
		}

		if(sum%n){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
}