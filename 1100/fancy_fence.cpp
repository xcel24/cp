#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		if(360 % (180 - n) == 0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}