#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	while(true){
		if(n==0){
			break;
		}

		std::vector<ll> v(n),res;

		for(auto &x:v){
			cin>>x;
		}

		vector<ll> wanted=v;
		sort(wanted.begin(),wanted.end());
		stack<ll> st;
		st.push(v[0]);
		
		ll i=0,j=1;
		bool check = false;
		while(i<wanted.size()){
			if(j<v.size() && wanted[i] == v[j]){
				res.push_back(v[j]);
				i++;
				j++;
			}
			else if(!st.empty()&&st.top() == wanted[i] ){
				res.push_back(wanted[i]);
				st.pop();
				i++;
			}else{
				if(j > n-1) break;

				st.push(v[j]);
				j++;
			}
		}

		for(int i=0;i<n;i++){
			if(wanted[i] != res[i]){
				check = true;
				break;
			}
		}

		if(!check){
			cout<<"yes";
		}else{
			cout<<"no";
		}

		cout<<endl;
			cin>>n;
	}
	
}