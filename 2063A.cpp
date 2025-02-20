#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int l,r;
        cin>>l>>r;
        int d = abs(l-r);
        if (l == 1 && r == 1){
            d+=1;
        }
        cout<<d<<endl;
    }
    return 0;
}
