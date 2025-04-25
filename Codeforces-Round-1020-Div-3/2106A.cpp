// Sri Rama Jayam

#include<iostream>
#include<string>

using namespace std;

int get_element_count(string s, char c){
        int count = 0;
        for (char ch : s){
                if (ch == c){
                        count++;
                }
        }
        return count;
}

int get_count_one(string s){
        int count_one = 0;
        char char_1 = '0';
        char char_2 = '1';
        char temp;
        for (int i = 0; i < s.length(); i++){
                if (s[i] == char_1){
                        temp = s[i];
                        s[i] = char_2;
                        count_one+=get_element_count(s, char_2);
                        s[i] = char_1;
                }
                else if (s[i] == char_2){
                        temp = s[i];
                        s[i] = char_1;
                        count_one+=get_element_count(s, char_2);
                        s[i] = char_2;
                }
        }
        return count_one;
}

int main(){
        int t;
        cin>>t;
        while (t--){
                int n;
                cin>>n;
                string s;
                cin>>s;
                int count_one = get_count_one(s);
                cout<<count_one<<endl;
        }
        return 0;
}
