#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		std::vector<ll> Godzilla(n);
		std::vector<ll> MechaGodzilla(m);
		for(ll i=0;i<n;++i){
			cin>>Godzilla[i];
		}
		for(ll i=0;i<m;++i){
			cin>>MechaGodzilla[i];
		}

		sort(Godzilla.begin(), Godzilla.end());
		sort(MechaGodzilla.begin(), MechaGodzilla.end());

		if(Godzilla[n-1] >= MechaGodzilla[m-1]){
			cout<<"Godzilla";
		}
		else if(MechaGodzilla[m-1] > Godzilla[n-1]){
			cout<<"MechaGodzilla";
		}

		
		cout<<endl;
	}
}