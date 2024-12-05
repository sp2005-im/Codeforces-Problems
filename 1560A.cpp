//Sri Rama Jayam
//Problem: ; Tag(s): 
#include<bits/stdc++.h>
using namespace std;
int dislike_of_threes(int k){
	int i = 0;
	while(k>0){
		i+=1;
		if (i%10!=3 && i%3!=0){
			k-=1;
		}
	}
	return i;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int res = dislike_of_threes(n);
		cout<<res<<endl;
	}
	return 0;
}
