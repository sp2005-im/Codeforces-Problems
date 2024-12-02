//Sri Rama Jayam
//Problem 1703A.cpp YES or YES? 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		 string s;
        	 cin>>s;
       		 if (s == "YES" || s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "yES" || s == "YeS" || s == "YEs"){
               		 cout<<"YES"<<endl;
       		 }
       		 else{
               		 cout<<"NO"<<endl;
		}
	}
	return 0;
}
