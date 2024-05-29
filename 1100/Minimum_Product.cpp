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
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;

		cout<<min((max(a-n,x)*max(y,b-n + min(a-x,n))),(max(x,a-n + min(b-y,n))*max(b-n,y)))<<endl;
	}


	return 0;
}