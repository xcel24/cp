#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
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

		ll p = 1, ans = 0;

		for(int i=0;i<31;i++){
			if(k & 1<<i){
				ans = (ans + p) % MOD;
			}

			p*= n;
			p %= MOD;
		}

		cout<<ans<<endl;
	}


	return 0;
}