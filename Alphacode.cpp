#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin>>s;
	while(s[0]!='0'){
		int n = s.size();
		ll dp[n] = {0};   //dp[i] => number of ways to decode string of lenght i

		dp[0]=1;

		for(int i=1;i<s.size();i++){
			int j = (s[i-1]-'0')*10 + (s[i]-'0');

			if(s[i]-'0'){        //check if given number is not zero;
				dp[i] = dp[i-1];   
			}

			if(j>=10 && j<=26){
				if(i==1){
					dp[i] = dp[i] + 1;
				}else{
					dp[i] += dp[i-2];
				}
			}
		}
		// for(int i=0;i<n;i++){
		// 	cout<<dp[i]<<" ";
		// }
		// cout<<endl;
		cout<<dp[n-1]<<endl;
		cin>>s;
	}
	return 0;
}