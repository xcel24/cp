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

		vector<int>arr(n);

		for(int &x : arr)cin>>x;

		int mn = *min_element(arr.begin(),arr.end());

		for(int i=0,k=0;k<n/2;i++){
			if(arr[i] != mn){
				cout<<arr[i]<<" "<<mn<<endl;
				k++;
			}
		}
	}



	return 0;
}