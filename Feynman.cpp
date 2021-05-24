#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	while(true){
		ll num;
		cin>>num;
		if(num==0) break;

		ll ans =0 ;
		ans = num*(num+1)*(2*num + 1);

		ans/=6;
		cout<<ans<<endl;
	}
}