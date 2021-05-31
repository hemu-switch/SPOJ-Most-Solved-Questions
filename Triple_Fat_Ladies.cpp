#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
    cin>>t;
    while(t--){
        long long k;
        cin>>k;
        // cout<<192 + 10*(25*(k-1))<<endl;

        // tn = a + (n-1)d
        cout<< 192 + (k-1)*250<<endl;
    }
    return 0;
}