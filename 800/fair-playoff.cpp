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
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		if(max(a,b) > min(c,d) and max(c,d)> min(a,b))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}