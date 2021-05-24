#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	while(true){
		ll num;
		cin>>num;
		if(num==-1) break;
		std::vector<ll> v(num);
		ll sum=0;
		for(int i=0;i<num;i++){
			cin>>v[i];
			sum += v[i];
		}
		if(sum%num==0){
			ll avg=sum/num,ans=0;
			for(int i=0;i<num;i++){
				if(v[i] > avg){
					ans+=(v[i]-avg);
				}
			}
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}