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

		vector<int>arr;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			arr.push_back(x);
		}

		int j=0;

		while(j<100){
			for(int i=1;i<n;i++){
				if(arr[i-1] >= arr[i]){
					arr[i] = max(0,arr[i] - arr[i-1]);
				}
			}

			if(arr[n-1] >= arr[0]){
				arr[0] = max(0,arr[n-1] - arr[0]);
			}

			j++;
		}

		int cnt=0;

		for(int i=0;i<n;i++){
			if(arr[i] !=0)cnt++;
		}

		cout<<cnt<<endl;

		for(int i=0;i<n;i++){
			if(arr[i] !=0)cout<<i+1<<" ";
		}

		cout<<endl;
	}



	return 0;
}