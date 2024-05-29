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
		int n,k;
		cin>>n>>k;

		int minima = INT_MAX;

		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			minima = min(minima,x);
		}

		for(int i=0;i<k;i++){
			int y;
			cin>>y;

			if(y<minima)cout<<y<<" ";
			else cout<<minima - 1<<" ";
		}
		cout<<endl;
	}


	return 0;
}