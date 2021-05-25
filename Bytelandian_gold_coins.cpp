#include<bits/stdc++.h>
using namespace std;
#define ll long long

std::map<ll,ll> dp;

ll GetCoins(ll num){
	if(num==0) return 0;

	if(dp.count(num) > 0 ) return dp[num];

	ll ans = max(num, GetCoins(num/2)+GetCoins(num/3)+GetCoins(num/4));

	return dp[num] = ans;


}

int main(){
	ll num;
	while(cin>>num){
		cout<<GetCoins(num)<<endl;
	}
	return 0;
}

