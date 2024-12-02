//Sri Rama Jayam
// Team - 231 A Difficulty : 800 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int res = 0;
	while (n--){
		int a,b,c;
		cin>>a>>b>>c;
		int s = a+b+c;
		if (s>=2){
			res+=1;
		}
	}
	cout<<res<<endl;
	return 0;
}
