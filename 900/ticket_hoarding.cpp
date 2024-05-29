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
		ll n,m,k;
		cin>>n>>m>>k;

		vector<ll>arr;

		for(int i=0;i<n;i++){
			ll x;
			cin>>x;

			arr.push_back(x);
		}

		ll ans = 0;

		if(n == (k/m)){
			ll penalty = 0;
			for(int i=0;i<n;i++){
				ans += (arr[i] + penalty) * m;

				penalty += m;
			}
		}else{
			sort(arr.begin(),arr.end());

			ll penalty = 0;

			for(int i=0;i<n;i++){
				if(k>0){
					ans += (arr[i] + penalty) * min(m,k);
					penalty += m;
					k = k-m;
				}
			}
		}

		cout<<ans<<endl;
	}


	return 0;
}