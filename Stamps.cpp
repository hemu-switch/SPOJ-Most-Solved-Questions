#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	ll j=1;
	while(t--){
		ll stamps,friends;
		cin>>stamps>>friends;

		ll sum =0;
		std::vector<ll> v(friends);

		for(auto &x:v){
			cin>>x;
		}
		ll c=0;
		sort(v.begin(), v.end());
		for(ll i=v.size()-1;i>=0;i--){
			if(stamps <= sum){
				break;
			}
			sum += v[i];
			c++;
		}
		if(stamps > sum){
			cout<<"Scenario #"<<j++<<":"<<endl;
			cout<<"impossible";
		}else{
			cout<<"Scenario #"<<j++<<":"<<endl;
			cout<<c;
		}
		cout<<endl;
	}
}