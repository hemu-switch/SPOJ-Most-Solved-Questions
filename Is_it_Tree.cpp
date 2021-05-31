#include<bits/stdc++.h>
using namespace std;
#define ll long long

int c=0;
void dfs(int i,vector<int> g[],vector<int>& vis){
	vis[i] = 1;
	c++;
	for(auto it:g[i]){
		if(!vis[it]){
			dfs(it,g,vis);
		}
	}
}

int main(){
	ll n,m;
	cin>>n>>m;
	if(n!=m+1){
		cout<<"NO"<<endl;
		return 0;
	}

	std::vector<int> g[n+1];

	for(ll i=0;i<m;i++){
		ll u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> vis(n+1,0);
	dfs(1,g,vis);

	if(c==n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}