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
		ll n,k;
		cin>>n>>k;

		ll temp = (k%(n-1));

		if(temp == 0)temp=-1;

		ll ans = (k/(n-1)) * n + temp;

		cout<<ans<<endl;
	}


	return 0;
}