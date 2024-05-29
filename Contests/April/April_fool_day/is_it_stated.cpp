#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	string x="it";

	while(t--){
		string s;
		cin>>s;

		bool stringFound = false;

		for(int i=0;i<s.length();i++){
			string y = s.substr(i,2);

			if(x==y){
				stringFound = true;
				break;
			}
		}

		if(stringFound)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

		
	}


	return 0;
}