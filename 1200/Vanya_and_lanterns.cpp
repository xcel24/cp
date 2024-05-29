#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	ll d;
	cin>>d;

	vector<ll>arr(n);
	for(auto &x : arr)cin>>x;

	sort(arr.begin(),arr.end());
	
	ll temp = 0;

	for(int i=0;i<n-1;i++){
		temp = max(temp,arr[i+1] - arr[i]);
	}

	ll distanceFromOrigin = arr[0] - 0;
	ll distanceFromEnd = d - arr[n-1];

	ll ans = max(temp, max(2*distanceFromEnd, 2* distanceFromOrigin));

	cout.precision(10);
	cout<<fixed<<ans/2.0;


	return 0;
}