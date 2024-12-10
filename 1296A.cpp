//Sri Rama Jayam 
//Problem : 1296A (Array with Odd Sum); Difficulty: 800; Tag(s): Math
#include<bits/stdc++.h>
using namespace std;
int array_sum(vector<int>y){
	//returns the sum of the elements of an array
	int sum = 0;
	for (int i = 0; i < y.size(); i++){
	       sum+=y[i];
	}
	return sum;
}

int odd_sum_check(vector<int>y){
	//returns 1 if it is possible to obtain an odd sum, returns 0 otherwise
	int sum = array_sum(y);
	int res = 0;
	int even_count = 0;
	int odd_count = 0;
	for (int i = 0; i<y.size(); i++){
		if (y[i]%2==0){
			even_count+=1;
		}
		else{
			odd_count+=1;
		}
	}	
	
	if (sum%2!=0){
		res = 1;
	}
	else{
		if (even_count==0 || odd_count==0){
			res = 0;
		}
		else{
			res = 1;
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		vector<int>y;
		while (n--){
			int a;
			cin>>a;
			y.push_back(a);
		}
		int res = odd_sum_check(y);
		if (res == 1){
			cout<<"YES"<<endl;
		}
		else if (res == 0){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
