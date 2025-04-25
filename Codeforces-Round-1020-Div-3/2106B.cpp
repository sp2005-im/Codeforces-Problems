#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        if (n == 1 && x == 0){
            cout<<0<<endl;
        }
        else if (n == 1 & x == 1){
            cout<<0<<endl;
        }
        else {
            for (int i = 0; i < n; i++){
                if (i!=x){
                    cout<<i<<' ';
                }
            }
            if (x<n){
                cout<<x<<endl;
            }
            else{
                cout<<endl;
            }
        }
    }
    return 0;
}
