#include<bits/stdc++.h>
using namespace std;

#define ll long long

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

		double y = b - d + log10(1.0*a/c);

		cout<<(y == 0 ?"=" : (y>0 ? ">" : "<") )<<endl;
	}


	return 0;
}