//Sri Rama Jayam
//Problem 1791A (Codeforces Checking) ; Difficulty: 800
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		char s;
        	cin>>s;
        	string s_check = "codeforces";
        	int counter = 0;
        	for (int i = 0; i<s_check.length(); i++){
                	if (s_check[i] == s){
                        	cout<<"YES"<<endl;
                        	break;
                	}
                	else{
                        	counter+=1;
                	}
        	}
        	if (counter == s_check.length()){
                	cout<<"NO"<<endl;
        	}
	}
	return 0;
}
