//Sri Rama Jayam
//Problem: 977A; Difficulty: 800; Tag(s): Implementation
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	while (k--){
		if (n%10!=0){
			n-=1;
		}
		else{
			n=n/10;
		}
	}
	cout<<n<<endl;
	return 0;
}
