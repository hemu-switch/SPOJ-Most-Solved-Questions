#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int col=1;
	
	while(col!=0){
		cin>>col;
		if(cols==0){
    		break;
		}
		string s;
		cin>>s;
		std::vector<vector<char>> Encode;
		bool direction = true;
		int k=0;
		int rows= s.size()/col;

		for(int i=0;i<rows;i++, direction = !direction){
			vector<char> v;
			for(int j=0;j<col;j++){
				v.push_back(s[k++]);
			}
			if(direction){
				reverse(v.begin(),v.end());
				
			}
			Encode.push_back(v);
		}

		for (int i = col-1; i >=0 ; --i){
			for (int j = 0; j < rows; ++j){
				printf("%c",Encode[j][i]);
			}
		}
		printf("\n");
	}

	return 0;
}