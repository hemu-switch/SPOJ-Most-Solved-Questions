#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	while(true){
		ll a,b,c;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0){
			break;
		}

		ll dif1 = b-a;
		ll dif2 = c-b;

		if(dif1==dif2){
			cout<<"AP "<<c+dif1<<endl;
		}else{
			cout<<"GP "<<c*(b/a)<<endl;
		}
	}
}