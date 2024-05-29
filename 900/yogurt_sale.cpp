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
		int n,a,b;
		cin>>n>>a>>b;

		//use promotion price
		if(2*a > b){

			int ans = (n/2)*b + (n%2)*a;
			cout<<ans<<endl;
		}

		//buy at indiviual price
		else{
			cout<<n*a<<endl;
		}
	}


	return 0;
}