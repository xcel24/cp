#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;

	int ans = 0;

	char start = 'a';

	for(int i=0;i<s.length();i++){
		char curr = s[i];

		ans += min(abs(curr - start), (26- abs(curr - start)));

		start = curr;
	}

	cout<<ans<<endl;


	return 0;
}