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

		vector<int>freq(n+1,0);

		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			freq[x]++;
		}

		int cnt = 0;

		for(int i=1;i<=n;i++)if(freq[i] == 2)cnt++;

		cout<<cnt<<endl;

	}




	return 0;
}