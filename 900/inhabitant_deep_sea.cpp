#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		ll n,k;
		cin>>n>>k;

		vector<int>a;
		ll sum = 0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			a.push_back(x);

			sum += x;
		}

		if(k/2 > sum) return n;
		else{
			
		}

	}

	return 0;
}