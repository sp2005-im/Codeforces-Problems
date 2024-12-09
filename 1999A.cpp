//Sri Rama Jayam
//Problem: 1999A (A+B Again?;) Difficulty: 800; Tag(s): implementation, math
#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n){
	int s = 0;
	while (n>0){
		s+=(n%10);
		n = n/10;
	}
	return s; //The sum of digits of a number
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int res = sum_of_digits(n);
		cout<<res<<endl;
	}
	return 0;
}
