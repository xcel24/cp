#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;

	vector<ll>arr;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;

		arr.push_back(x);
	}

	//let's build prefix and suffix arrays
	vector<ll>prefix(n,0), suffix(n,0);

	prefix[0] = 0;
	suffix[n-1] = 0;

	for(int i=1;i<n;i++){
		if(arr[i] > arr[i-1])prefix[i] = prefix[i-1] + 0;
		else prefix[i] = prefix[i-1] + arr[i-1] - arr[i];
	}

	for(int i=n-2;i>=0;i--){
		if(arr[i] > arr[i+1])suffix[i] = suffix[i+1] + 0;
		else suffix[i] = suffix[i+1] + arr[i+1] - arr[i];
	}


	while(m--){
		int a,b;
		cin>>a>>b;

		if(b>a){
			cout<<prefix[b-1] - prefix[a-1]<<endl;
		}else{
			cout<<suffix[b-1] - suffix[a-1]<<endl;
		}
	}


	return 0;
}