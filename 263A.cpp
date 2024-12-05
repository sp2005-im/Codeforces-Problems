//Sri Rama Jayam
//Problem : 263A (Beautiful Matrix), Tag(s): Implementation
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size = 5;
	int arr[size][size];
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cin>>arr[i][j];
		}
	}
	int one_x = 0; 
	int one_y = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j<size; j++){
			if (arr[i][j] == 1){
				one_x = i;
				one_y = j;
			}
		}
	}
	int res = abs(2-one_x)+abs(2-one_y);
	cout<<res<<endl;
	return 0;
}
