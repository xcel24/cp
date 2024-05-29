#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	ll n,m,a;
	cin>>n>>m>>a;

	ll cols = ceil(n*1.0/a);
	ll rows = ceil(m*1.0/a);

	cout<<cols * rows<<endl;


	return 0;
}