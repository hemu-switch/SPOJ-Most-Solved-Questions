#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		std::vector<int> v(n);
		std::vector<int> u(n);

		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>u[i];
		}

		sort(v.begin(),v.end());
		sort(u.begin(),u.end());

		ll ans=0;

		for (int i = 0; i < n; ++i)
		{
			ans +=(v[i]*u[i]);
		}
		cout<<ans<<endl;
	}
}