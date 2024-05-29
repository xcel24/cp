#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	vector<int>freq(5,0);

	for(int i=0;i<n;i++){
		int x;
		cin>>x;

		freq[x]++;
	}

	freq[1] = max(freq[1] - freq[3], 0);

	int ans = freq[4] + freq[3] + ceil((freq[1] + 2*freq[2]) * 1.0/4);

	cout<<ans<<endl;


	return 0;
}