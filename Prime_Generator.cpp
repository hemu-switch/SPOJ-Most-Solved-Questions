#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll num){
	if(num<2) return false;
	if(num==2) return true;
	if(num%2==0) return false;
	for(int i=3;i*i<=num;i+=2){
		if (num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll m,n;
		cin>>m>>n;

		for(ll i=m;i<=n;i++){
			if(isPrime(i)){
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
}