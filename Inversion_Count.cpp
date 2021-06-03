// Inversion Count
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll inv_count;

void merge(vector<ll>&v ,ll s,ll mid, ll e){
	ll i=s,j=mid+1,k=s;

	ll temp[v.size()];

	while(i<=mid && j<=e){
		if(v[i] <= v[j]){
			temp[k++] = v[i++];
		}else{
			inv_count += (mid-i) +1 ; // check
			temp[k++] = v[j++];
		}
	}
	while(i<=mid){
		temp[k++] = v[i++];
	}
	while(j<=e){
		temp[k++] = v[j++];
	}

	for (ll i = s; i <= e; ++i)
	{
		v[i] = temp[i];
	}
}


void partition(vector<ll>&v ,ll s, ll e){
	if(s>=e){
		return;
	}
	ll mid = (s+e)>>1;

	partition(v,s,mid);
	partition(v,mid+1,e);
	merge(v,s,mid,e);
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		inv_count=0;
		ll n;
		cin>>n;
		std::vector<ll> v(n);
		for(ll i=0;i<n;++i){
			cin>>v[i];
		}

		// for(ll i=0;i<n;++i){
		// 	cout<<v[i]<<" ";
		// }

		partition(v,0,n-1);
		cout<<inv_count<<endl;
	}
}