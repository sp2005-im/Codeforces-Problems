//Sri Rama Jayam
//Problem: 69A (The Young Physicist) Tags: Implementation, Math
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	//Net forces in 
	int net_f_x = 0; //x direction
	int net_f_y = 0; //y direction
	int net_f_z = 0; //z direction 
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		net_f_x+=x;
		net_f_y+=y;
		net_f_z+=z;
	}
	if (net_f_x == 0 && net_f_y == 0 && net_f_z == 0){
	       cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;	
}
