//Sri Rama Jayam
//Problem : 1409A (Yet Another Two Integers Problem)
#include<bits/stdc++.h>
using namespace std;
int min_num_moves_equalize(int a, int b){
	int res = (a-b)/10;
	if ((a-b)%10!=0){
		res+=1;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int a,b;
		cin>>a>>b;
		int res = 0;
		if (a>b){
			res = min_num_moves_equalize(a,b);
		}
		else if (b>a){
			res = min_num_moves_equalize(b,a);
		}
		else{
			res = 0;
		}
		cout<<res<<endl;
	}
	return 0;
}
