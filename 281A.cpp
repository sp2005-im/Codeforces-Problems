//Sri Rama Jayam
//Problem : 281A (Word Capitalization) Tags: implementation, strings 
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	char first_letter = toupper(s[0]);
	string s_new = "";
	s_new+=first_letter;
	for (int i = 1; i<s.length(); i++){
		s_new+=s[i];
	}
	cout<<s_new<<endl;
	return 0;
}
