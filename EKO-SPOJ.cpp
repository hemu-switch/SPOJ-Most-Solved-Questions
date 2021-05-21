#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;
long long m;
long long tree[N];

bool isPossible(int h){
	long long sum=0;
	for(int i=0;i<n;i++){
		if(tree[i] >= h){
			sum+=(tree[i] - h);
		}
	}

	return sum>=m;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>tree[i];
	}
	long long lo=0,hi=1e9,mid;

	while(hi-lo>1){
		mid = (lo + hi)/2;

		if(isPossible(mid)){
			lo=mid;
		}else{
			hi=mid-1;
		}
	}

	if(isPossible(hi)){
		cout<<hi<<endl;
	}else{
		cout<<lo<<endl;
	}

}