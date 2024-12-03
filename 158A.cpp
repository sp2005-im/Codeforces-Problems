//Sri Rama Jayam
//Problem: 158A (Next Round)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int>y;
	int n_contestants = 0; //Initializing the number of contestants eligible for the next round to zero
	for (int i = 0; i<n; i++){
		int a;
		cin>>a;
		y.push_back(a);
	}
	for (int i = 0; i<n; i++){
		if (y[i]>=y[k-1] && y[i]>0){
			n_contestants+=1;
		}
	}
	cout<<n_contestants<<endl;
	return 0;
}

