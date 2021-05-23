#include<bits/stdc++.h>
using namespace std;

  int fact(int n){
      if(n<=1)
      {
          return 1;
      }
      else
      {
          return n*fact(n-1);
      }
  }
int main() {
	int t;
	cin>>t;
	for (int i =0;i<t;i++)
	{
	    int n;
	    long long int fac=1;
	    cin>>n;
	    
	    cout<<fact(n)<<endl;
	}
	return 0;
}