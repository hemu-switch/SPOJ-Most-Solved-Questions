#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll num;
	cin>>num;
	ll count=0;
	for(ll i=1;i<=sqrt(num);i++){
		for(ll j=i+1;i*j<=num;j++){
			count++;
		}
	}

	count+=sqrt(num);
	cout<<count<<endl;
}
