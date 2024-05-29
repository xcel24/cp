#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){

	if(ch =='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='y') return true;

	return false;
}

string modifyString(string &s){

	string ans = ".";

	for(int i=0;i<s.length();i++){
		char ch = tolower(s[i]);

		if(!isVowel(ch)){
			ans += ch;
			ans +=".";
		}
	}

	ans.pop_back();

	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;

	cout<<modifyString(s)<<endl;

	return 0;
}