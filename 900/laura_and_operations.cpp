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
		int a,b,c;
		cin>>a>>b>>c;

		cout<<(b%2 == c%2)<<" "<<(a%2==c%2)<<" "<<(a%2==b%2)<<endl;

	}

	return 0;
}