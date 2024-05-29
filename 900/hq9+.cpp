#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;

	bool flag = false;

	for(int i=0;i<s.length();i++){
		if(s[i] == 'H' or s[i] == 'Q' or s[i]=='9' or s[i] == '+'){
			if(s[i] != '+'){
				flag = true;
				break;
			}
		}
	}

	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;



	return 0;
}