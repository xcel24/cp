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

	vector<ll int>arr(n);
	for(auto &x:arr)cin>>x;

	sort(arr.begin(),arr.end());

	int q;
	cin>>q;

	while(q--){
		int k;
		cin>>k;
		cout<<upper_bound(arr.begin(),arr.end(),k) - arr.begin()<<endl;

	}

	return 0;
}