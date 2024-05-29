#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int l,a,b;
	cin>>l>>a>>b;

	double ans = (l*a*1.0)/(a+b);

	cout<<ans<<endl;

	return 0;
}