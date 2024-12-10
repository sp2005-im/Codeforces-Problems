//Sri Rama Jayam
//Problem: 1760A; Tag(s): Implementation
#include<bits/stdc++.h>
using namespace std;
int medium_number(int a, int b, int c){
	vector<int>y;
	y.push_back(a);
	y.push_back(b);
	y.push_back(c);
	sort(y.begin(),y.end());
	int res = y[1];
	return res;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int a,b,c;
		cin>>a>>b>>c;
		int res = medium_number(a,b,c);
		cout<<res<<endl;
	}
	return 0;
}
