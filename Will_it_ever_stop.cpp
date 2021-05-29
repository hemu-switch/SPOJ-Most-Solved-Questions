#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll num;
	cin>>num;
	bool check=false;
	while(num > 1){
		// cout<<num<<" ";
		if(num%2 == 0){
			num=num/2;
		}else{
			check=true;
			break;
		}
	}
	if(!check){
		printf("TAK");
	}else{
		printf("NIE");
	}
}