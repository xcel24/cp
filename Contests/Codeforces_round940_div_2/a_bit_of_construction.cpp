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

		if(n==1)cout<<k<<endl;
		else{
			int x = log2(k);
			ll num1 = pow(2,x) - 1;
			ll num2 = k - num1;

			for(int i=1;i<=n-2;i++){
				cout<<0<<" ";
			}
			cout<<num1<<" "<<num2<<endl;
		}
		
	}


	return 0;
}