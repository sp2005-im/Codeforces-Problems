//Sri Rama Jayam
//Problem: 1807A (Plus or Minus); Difficulty: 800
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int a,b,c;
		cin>>a>>b>>c;
		if (c == a+b){
			cout<<'+'<<endl;
		}
		else if (c==a-b){
			cout<<'-'<<endl;
		}
	}
	return 0;
}
