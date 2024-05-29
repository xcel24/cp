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
		int n;
		cin>>n;

		vector<int>freq(101,0);

		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			freq[x]++;
		}

		int ans = 0;

		for(int i=0;i<freq.size();i++){
			ans += floor(freq[i] * 1.0 / 3);
		}

		cout<<ans<<endl;
	}


	return 0;
}