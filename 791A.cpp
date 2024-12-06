//Sri Rama Jayam
//Problem: 791A (Bear and the Big Brother) Difficulty: 800 Tag(s): implementation
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b; //a -> Limak's Weight; b-> Bob's weight
	int n_years = 0; //Number of years it will take for Limak to 'outweigh' Bob
	while (true){
		a+=2*a;
		b+=b;
		n_years+=1;
		if (a>b){
			break;
		}
	}
	cout<<n_years<<endl;
	return 0;
}
