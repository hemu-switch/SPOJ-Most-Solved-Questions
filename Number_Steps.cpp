#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll x,y;
    	cin>>x>>y;

    	if(x==y ){    	
    		if(x&1){
    			cout<<x+y-1;
    		}else{
    			cout<<x+y;
    		}
    	}else if(x==y+2){
    		if(x&1){
    			cout<<x+y-1;
    		}else{
    			cout<<x+y;
    		}
    	}else{
    		cout<<"No Number";
    	}

    	
    	cout<<endl;
    }

    return 0;
}
