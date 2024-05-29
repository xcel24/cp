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

		vector<int>arr(n),res(n);
		for(auto &x:arr)cin>>x;

		int minMex = 0, maxMex = 1;

		set<int>s;

		for(int i=0;i<n;i++){
			if(minMex - arr[i] < 0 or s.count(minMex - arr[i])) res[i] = maxMex - arr[i];
			else res[i] = minMex - arr[i];

			if(res[i] == minMex){
				minMex = maxMex;
				maxMex++;

				while(s.count(maxMex))maxMex++;
			}else if(res[i] == maxMex){
				maxMex++;
				while(s.count(maxMex))maxMex++;
			}

			s.insert(res[i]);
		}

		for(auto x:res)cout<<x<<" ";
		cout<<endl;
	}



	return 0;
}