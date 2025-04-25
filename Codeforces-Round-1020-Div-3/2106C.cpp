// Sri Rama Jayam
 
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int get_element_count(vector<int>b, int c){
	int count_c = 0;
	for (int x : b){
		if (x == c){
			count_c++;
		}
	}
	return count_c;
}
 
void sort_vector(vector<int>a){
	sort(a.begin(), a.end());
}
 
int cherry_bomb(vector<int>a, vector<int>b, int k){
	int c = -1;
	int count_c = get_element_count(b,c);
	int vector_size = b.size();
	set<int>unique_x_check;
	if (count_c == vector_size){
		sort_vector(a);
		int max_a = *max_element(a.begin(), a.end());
		int min_a = *min_element(a.begin(), a.end());
		if (max_a - min_a > k){
			return 0;
		}
		else{
			int min_sum = max_a;
			int max_sum = min_a+k;
			return max_sum-min_sum+1;
		}
	}
	
 
	else{
		int x;
		for (int i = 0; i < vector_size; i++){
			if (b[i]!=-1){
				x = a[i] + b[i];
				unique_x_check.insert(x);
			}
		}
		if (unique_x_check.size() != 1){
			return 0;
		}
		else{
			for (int i = 0; i < vector_size; i++){
				if (b[i] == -1 && (x-a[i]>k || x-a[i] < 0)){
					return 0;
				}
			}
			return 1;
		}	
	}
	return 0;
}
 
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n),b(n);
		for (int i = 0; i < n; i++){
			cin>>a[i];
		}
		for (int i = 0; i < n; i++){
			cin>>b[i];
		}
		int min_moves = cherry_bomb(a,b,k);
		cout<<min_moves<<endl;
	}
	return 0;
}
