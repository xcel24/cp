#include<bits/stdc++.h>
using namespace std;

pair<int,int> calculatePeak(vector<int>&arr){
	int n = arr.size();

	int idx = 0, count = 0;

	for(int i = 1; i<n-1; i++){
		if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
			count++;
			idx = i;
		}
	}

	return {count, idx};
}

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

		vector<int>arr(n);
		for(auto &x:arr)cin>>x;

		if(arr.size() == 2) cout<<"YES"<<endl;
		else{
			pair<int,int>peaks = calculatePeak(arr);

			if(peaks.first == 0){
				if(arr[0] <= arr[1])cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}else if(peaks.first > 1)cout<<"NO"<<endl;
			else{
				int idx = peaks.second;

				int maxElement = *max_element(arr.begin() + idx + 1 , arr.end());

				if(maxElement > arr[0])cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}

		}
		
	}



	return 0;
}