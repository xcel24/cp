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
		int p1,p2,p3;
		cin>>p1>>p2>>p3;

		int sum = p1 + p2 + p3;

		if(sum % 2 != 0)cout<<-1<<endl;
		else cout<<min(sum/2, p1 + p2)<<endl;
	}

	return 0;
}