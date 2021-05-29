#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll num;
	cin>>num;
	if(num%10 == 0){
		cout<<"2"<<endl;
	}else{
		cout<<"1"<<endl<<num%10<<endl;
	}
}