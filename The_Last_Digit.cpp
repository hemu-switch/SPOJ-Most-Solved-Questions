
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll x, llt y, ll p)
{
    ll res = 1;     
    
    if (x%p==0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    { 
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		cout<<power(a,b,10)<<endl;
	}
	return 0;
}