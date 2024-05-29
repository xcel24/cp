#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m,a,b;
	cin>>n>>m>>a>>b;

	cout<<min(n*a,n/m * b + min(b,n%m * a));


	return 0;
}