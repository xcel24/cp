#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	string ref = "BAN";

	while(t--){
		int n;
		cin>>n;

		string s="";
		for(int i=0;i<n;i++)s+=ref;

		int num_op=0;

		if(n%2==0)num_op = n/2;
		else num_op = n/2 + 1;

		cout<<num_op<<endl;

		int i=1,j=3*n;

		for(int k=0;k<num_op;k++){
			cout<<i<<" "<<j<<endl;
			i = i + 3;
			j = j - 3;
		}
	}


	return 0;
}