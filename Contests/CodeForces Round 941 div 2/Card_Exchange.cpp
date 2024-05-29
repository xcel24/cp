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
		int n,k;
		cin>>n>>k;

		vector<int>arr;
		vector<int>freq(101,0);

		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			arr.push_back(x);

			freq[x]++;
		}

		bool isPresent = false;
		for(int i=0;i<n;i++){
			if(freq[arr[i]] >= k){
				isPresent = true;
				break;
			}
		}

		if(isPresent)cout<<k-1<<endl;
		else cout<<n<<endl;
	}


	return 0;
}