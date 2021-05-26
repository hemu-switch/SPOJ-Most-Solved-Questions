#include <bits/stdc++.h>
using namespace std;
#define ll long long



//This function is predicate function which 
// returns somethig like TTTTTTFFFF and we have to return last T.

bool canPlaceCows(ll minDist,vector<ll> v, ll c){
	ll prevPosition = -1;
	ll count=0;
	for(ll i=0;i<v.size();i++){
		if(prevPosition==-1 || (v[i]-prevPosition) >= minDist){
			count++;               // we have placed a single cow
			prevPosition=v[i];
		}
		
	}
	return count>=c;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		std::vector<ll> v(n);
		for(ll i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(), v.end());

		ll l=0,h=1e9;

		while(h-l>1){
			ll mid = (l+h)/2;
			if(canPlaceCows(mid,v,c)){
				l = mid;
			}else{
				h = mid-1;
			}
		}

		if(canPlaceCows(h,v,c)){
			cout<<h;
		}else{
			cout<<l;
		}
		cout<<endl;
	}
}