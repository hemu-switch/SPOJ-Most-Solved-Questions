#include <bits/stdc++.h>

using namespace std;
#define ll long long

int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;

    	stack<char> st;
    	string res;
    	for(int i=0;i<s.size();i++){
    		if(s[i]>='a' && s[i]<='z'){
    			res+=s[i];
    		}
    		else if(s[i]=='('){
    			st.push('(');
    		}
    		else if(s[i]==')'){
    			while(!st.empty()&&st.top()!='('){
    				char temp = st.top();
    				st.pop();
    				res+=temp;
    			}
    			st.pop();
    		}
    		else{
    			while(!st.empty() && prec(s[i]) <= prec(st.top())){
    				char temp = st.top();
    				st.pop();
    				res+=temp;
    			}
    			st.push(s[i]);
    		}
    	}

    	while(!st.empty()){
    		res+=st.top();
    		st.pop();
    	}

    	cout<<res;
    	cout<<endl;
    }

    return 0;
}
