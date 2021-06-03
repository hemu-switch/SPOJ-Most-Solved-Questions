#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll num1,num2,sum;
		cin>>num1>>num2>>sum;

		ll n = (2*sum)/(num1 + num2);
		ll d = (num2-num1)/(n-5);
		ll a = num1 - 2*d;
		cout<<n<<endl;
		for(int i=0;i<n;i++){
			cout<< a + i*d<<" ";
		}
		cout<<endl;
	}
	return 0;
}